/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesus-l <jjesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:03:10 by jjesus-l          #+#    #+#             */
/*   Updated: 2022/09/10 17:56:54 by jjesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_symbols(int ln, int cl, int y, int x)
{
	if ((ln == 1 && cl == 1) || (ln == y && cl == x && y != 1 && x != 1))
		ft_putchar('/');
	else
	{
		if ((ln == 1 && cl == x) || (ln == y && cl == 1))
			ft_putchar('\\');
		else
		{
			if (ln == 1 || ln == y || cl == 1 || cl == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
	}
}

void	rush(int larg, int alt)
{
	int	col;
	int	lin;

	if (larg <= 0 || alt <= 0)
		return ;
	lin = 1;
	while (lin <= alt)
	{
		col = 1;
		while (col <= larg)
		{
			ft_write_symbols(lin, col, alt, larg);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
