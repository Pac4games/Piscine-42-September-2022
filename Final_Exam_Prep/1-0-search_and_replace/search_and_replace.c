#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		int p;

		if (av[2][1] || av[3][1])
		{
			write(1, "\n", 1);
			return (0);
		}
		p = 0;
		while (av[1][p] != '\0')
		{
			if (av[1][p] == av[2][0])
				av[1][p] = av[3][0];
			write(1, &av[1][p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
