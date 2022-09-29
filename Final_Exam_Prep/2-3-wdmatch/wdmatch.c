#include <unistd.h>

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		write(1, &str[p], 1);
		p++;
	}
}

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p])
		p++;
	return (p);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	p;
		int i;

		p = 0;
		i = 0;
		while (av[1][p] && av[2][i])
		{
			if (av[1][p] == av[2][i])
			{
				p++;
				i++;
			}
			else
				i++;
		}
		if (ft_strlen(av[1]) == p)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
