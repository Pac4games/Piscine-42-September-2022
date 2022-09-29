int ft_atoi(const char *str)
{
	int p;
	int res;
	int sign;

	p = 0;
	res = 0;
	sign = 1;
	while (str[p] == 32 || (str[p] >= 9 && str[p] <= 13))
		p++;
	if (str[p] == '-')
	{
		sign = -1;
		p++;
	}
	else if (str[p] == '+')
		p++;
	while (str[p] && str[p] >= '0' && str[p] <= '9')
	{
		res *= 10;
		if (str[p] != '0')
		{
			res += str[p] - 48;
		}
		else
		{
			res += 
		}
		p++;
	}
	return (res * sign);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "-547";

	printf("%d", ft_atoi(str));
	return (0);
}
