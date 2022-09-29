#include <unistd.h>

int	ft_atoi(char *str)
{
	int	p;
	int	res;

	p = 0;
	res = 0;
	while (str[p] && str[p] >= '0' && str[p] <= '9')
	{
		res *= 10;
		res += str[p] - 48;
		p++;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb <= 1)
		return (0);
	while (p <= (nb / 2))
	{
		if (!(nb % p))
			return (0);
		else
			p++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	num;
		int	res;
		int	p;

		res = 0;
		p = 0;
		num = ft_atoi(av[1]);
		while (p <= num)
		{
			if (ft_is_prime(p))
				res += p;
			p++;
		}
		ft_putnbr(res);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "0\n", 2);
	return (0);
}
