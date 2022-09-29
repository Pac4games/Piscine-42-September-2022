/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:28:52 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/11 11:37:39 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put2char(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	c1;
	char	c2;

	if (num <= 9)
	{
		c1 = num + 48;
		ft_put2char('0', c1);
	}
	else if (num <= max)
	{
		c1 = (num % 10) + 48;
		c2 = (num / 10) + 48;
		ft_put2char(c1, c2);
	}
}

void	ft_writeint(int num1, int num2)
{
	ft_putint(num1, 98);
	write(1, " ", 1);
	ft_putint(num2, 99);
	if (num1 != 98 || num2 != 99)
	{
		ft_put2char(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	fir;
	int	sec;

	fir = 0;
	while (fir <= 98)
	{
		sec = fir + 1;
		while (sec <= 99)
		{
			ft_writeint(fir, sec);
			sec++;
		}
		fir++;
	}
}
