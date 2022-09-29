#include <unistd.h>

int	main(void)
{
	char	p;

	p = '9';
	while (p >= '0')
	{
		write(1, &p, 1);
		p--;
	}
	write(1, "\n", 1);
	return (0);
}
