/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjesus-l <jjesus-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:33:42 by jjesus-l          #+#    #+#             */
/*   Updated: 2022/09/10 16:01:29 by jjesus-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_symbols(int ln, int cl, int y, int x)
{
	if (ln == 1 && (cl == 1 || cl == x))
		ft_putchar('A');
	else
	{
		if (ln == y && (cl == 1 || cl == x))
			ft_putchar('C');
		else
		{
			if (cl == 1 || cl == x || ln == 1 || ln == y)
				ft_putchar('B');
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
