#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;
		int	r;

		p = 0;
		while (av[1][p] != '\0')
		{
			if (av[1][p] >= 'a' && av[1][p] <= 'z')
				r = av[1][p] - 'a';
			else if (av[1][p] >= 'A' && av[1][p] <= 'Z')
				r = av[1][p] - 'A';
			else
				r = 0;
			while (r >= 0)
			{
				write(1, &av[1][p], 1);
				r--;
			}
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

