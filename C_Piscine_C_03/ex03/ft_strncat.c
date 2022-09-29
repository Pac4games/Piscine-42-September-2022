/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:13:46 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/15 11:43:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	p;

	c = 0;
	p = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[p] != '\0' && p < nb)
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
	char dest[20] = "123";
	char src[] = "4567890123456";
	unsigned int nb = 8;

	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
*/
