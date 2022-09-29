#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		int	p;
		int	i;

		p = 0;
		i = ac - 1;
		while(av[i][p] != '\0')
		{
			write(1, &av[i][p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
