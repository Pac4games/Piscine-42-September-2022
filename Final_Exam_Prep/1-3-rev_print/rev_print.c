#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p] != '\0')
			p++;
		p -= 1;
		while (p >= 0)
		{
			write(1, &av[1][p], 1);
			p--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
