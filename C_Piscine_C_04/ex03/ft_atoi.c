/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:44:57 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/17 15:08:03 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	p;
	int	s;
	int	res;

	p = 0;
	s = 1;
	res = 0;
	while ((str[p] >= '\t' && str[p] <= '\r') || str[p] == ' ')
		p++;
	while (str[p] == '+' || str[p] == '-')
	{
		if (str[p] == '-')
			s *= -1;
		p++;
	}
	while (str[p] >= '0' && str[p] <= '9')
	{
		res = (str[p] - '0') + (res * 10);
		p++;
	}
	return (res * s);
}
