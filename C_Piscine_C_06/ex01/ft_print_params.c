/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:33:58 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/20 13:58:56 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	p;
	int	i;

	i = 1;
	while (i < ac)
	{
		p = 0;
		while (av[i][p] != '\0')
		{
			write(1, &av[i][p], 1);
			p++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
