/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:01:15 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/20 14:30:10 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	p;

	p = 0;
	while ((s1[p] == s2[p]) && (s1[p] != '\0') && (s2[p] != '\0'))
		p++;
	return (s1[p] - s2[p]);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		write(1, &str[p], 1);
		p++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	h;

	i = 1;
	while (i < ac - 1)
	{
		h = 1;
		while (h < ac - 1)
		{
			if (ft_strcmp(av[h], av[h + 1]) > 0)
				ft_swap(&av[h], &av[h + 1]);
			h++;
		}
		i++;
	}
	h = 1;
	while (h < ac)
	{
		ft_putstr(av[h]);
		write(1, "\n", 1);
		h++;
	}
	return (0);
}
