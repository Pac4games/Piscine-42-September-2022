/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:53:51 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/15 11:08:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	p;

	p = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[p] != '\0')
	{
		dest[c] = src[p];
		p++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("result = %s\n-----\n", dest);

	return (0);
}
*/
