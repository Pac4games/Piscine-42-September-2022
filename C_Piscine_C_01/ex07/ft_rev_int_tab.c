/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:34:26 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/11 18:56:54 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	change;

	count = 0;
	while (count < size)
	{
		change = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = change;
		count++;
		size--;
	}		
}
