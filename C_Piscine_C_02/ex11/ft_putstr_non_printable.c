/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:49:35 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/14 12:35:35 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//return 1 if "c" is printable, return 0 if it's not
int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	dec_to_hex(int dec)
{
	int		p;
	int		temp;
	char	hex[];

	p = 0;
	while (dec != 0)
	{
		temp = 0;
		temp = dec % 16;
		if (temp < 10)
		{
			hex[p] = temp + 48;
			p++;
		}
		else
		{
			hex[p] = temp + 55;
			p++;
		}
		dec /= 16;
	}
	return (hex);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_putstr_non_printable(char *str)
{
	int	p;
	int	dec;

	p = 0;
	while (str[p] != '\0')
	{
		if (is_printable(str[p] == 1))
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			dec = str[p];
			ft_putnbr(dec);
		}
		p++;
	}
}
