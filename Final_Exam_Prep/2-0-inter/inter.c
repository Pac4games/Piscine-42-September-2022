#include <unistd.h>

int is_blacklisted(char c, char *blacklist, int len)
{
	int p;

	p = 0;
	while (p <= len)
	{
		if (c == blacklist[p])
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
		int		i;
		int		p;

		p = 0;
		i = 0;
		while (av[1][p])
		{
			if (av[1][p] == av[2][i] && !is_blacklisted(av[1][p], blacklist, p))
			{
				write(1, &av[1][p], 1);
				blacklist[p] = av[1][p];
				p++;
				i++;
			}
			else if (av[1][p] && !av[2][i])
			{
				p++;
				i = 0;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
