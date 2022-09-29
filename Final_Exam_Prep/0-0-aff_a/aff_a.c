#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	p;

		p = 0;
		while (av[1][p] != '\0')
		{
			if (av[1][p] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			else
				p++;
		}
	}
	else
		write(1, "a", 1);
	write (1, "\n", 1);
	return (0);
}
