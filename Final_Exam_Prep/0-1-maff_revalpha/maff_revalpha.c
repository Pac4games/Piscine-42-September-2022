#include <unistd.h>

int	main(void)
{
	char	alpha[] = "zYxWvUtSrQpOnMlKjIhGfEdCbA";
	int		p;

	p = 0;
	while (alpha[p] != '\0')
	{
		write(1, &alpha[p], 1);
		p++;
	}
	write(1, "\n", 1);
	return (0);
}
