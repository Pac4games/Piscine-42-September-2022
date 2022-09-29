/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:35:15 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/15 17:53:57 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	p;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		p = 0;
		while (str[p + i] == to_find[p] && str[p + i] != '\0')
		{
			if (to_find[p + 1] == '\0')
				return (&str[i]);
			p++;
		}
		i++;
	}
	return (0);
}
/*
int		main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}
*/
