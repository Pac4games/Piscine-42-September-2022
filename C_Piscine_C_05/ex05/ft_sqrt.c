/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:24:28 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/19 16:30:35 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;
	long int	a;

	a = nb;
	i = 2;
	if (a <= 0)
		return (0);
	else if (a == 1)
		return (1);
	else if (a >= 2)
	{
		while ((i * i) <= a)
		{
			if ((i * i) == a)
				return (i);
			i++;
		}
	}
	return (0);
}
