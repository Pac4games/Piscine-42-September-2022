#include <unistd.h>

int	main(void)
{
	char	hello[] = "Hello World!";
	int		p;

	p = 0;
	while (hello[p] != '\0')
	{
		write(1, &hello[p], 1);
		p++;
	}
	write(1, "\n", 1);
}
