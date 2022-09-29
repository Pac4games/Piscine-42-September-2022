/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:36:56 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/20 15:49:36 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_print_program_name(int ac, char **av)
{
	int	p;

	p = 0;
	while (av[0][p] != '\0' && ac)
	{
		write(1, &av[0][p], 1);
		p++;
	}
	return (**av);
}

int	main(int ac, char **av)
{
	ft_print_program_name(ac, av);
	write(1, "\n", 1);
	return (0);
}
