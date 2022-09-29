#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p] != '\0')
		{
			if ((av[1][p] >= 'n' && av[1][p] <= 'z') || (av[1][p] >= 'N' && av[1][p] <= 'Z'))
			   av[1][p] -= 13;
			else if ((av[1][p] >= 'a' && av[1][p] <= 'm') || (av[1][p] >= 'A' && av[1][p] <= 'M'))
				av[1][p] += 13;
			write(1, &av[1][p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
