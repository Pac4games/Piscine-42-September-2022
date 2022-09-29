#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p] != '\0')
		{
			if (av[1][p] >= 'a' && av[1][p] <= 'z')
				av[1][p] -= 32;
			else if (av[1][p] >= 'A' && av[1][p] <= 'Z')
				av[1][p] += 32;
			write(1, &av[1][p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
