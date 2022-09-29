int	ft_atoi(const char *str)
{
	int	p;
	int	sign;
	int	res;

	p = 0;
	sign = 1;
	res = 0;
	while (str[p] == 32 || (str[p] >= 9 && str[p] <= 13))
		p++;
	if (str[p] == '-')
	{
		sign = -1;
		p++;
	}
	else if (str[p] == '+')
		p++;
	while (str[p] != '\0' && str[p] != 32 && str[p] != 9)
	{
		res *= 10;
		res += str[p] - 48;
		p++;
	}
	return (res * sign);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}
