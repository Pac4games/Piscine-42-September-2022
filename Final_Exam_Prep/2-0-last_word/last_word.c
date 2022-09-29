#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p])
			p++;
		p--;
		while (p > 0 && (av[1][p] == 32 || (av[1][p] >= 9 && av[1][p] <= 13)))
			p--;
		while (p > 0 && av[1][p] != 32 && av[1][p] != 9)
			p--;
		p++;
		while (av[1][p] && av[1][p] != 32 && av[1][p] != 9)
		{
			write(1, &av[1][p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
