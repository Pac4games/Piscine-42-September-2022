#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p] == 32 || av[1][p] == 9)
			p++;
		while (av[1][p] != '\0')
		{
			if (av[1][p] != 32 && av[1][p] != 9)
			{
				write(1, &av[1][p], 1);
				p++;
			}
			else
				break ;
		}
	}
	write(1, "\n", 1);
	return (0);
}
