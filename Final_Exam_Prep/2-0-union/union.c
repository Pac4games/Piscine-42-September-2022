#include <unistd.h>

int	is_blacklisted(char c, char *blacklist, int len)
{
	int	p;

	p = 0;
	while (p <= len)
	{
		if (blacklist[p] == c)
			return (1);
		p++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char	blacklist[255];
		int		p;
		int		i;
		int		len;

		p = 0;
		i = 0;
		len = 0;
		while (av[1][p])
		{
			if (!is_blacklisted(av[1][p], blacklist, len))
			{
				write(1, &av[1][p], 1);
				blacklist[len] = av[1][p];
				len++;
			}
			p++;
		}
		while (av[2][i])
		{
			if (!is_blacklisted(av[2][i], blacklist, len))
			{
				write(1, &av[2][i], 1);
				blacklist[len] = av[2][i];
				len++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
