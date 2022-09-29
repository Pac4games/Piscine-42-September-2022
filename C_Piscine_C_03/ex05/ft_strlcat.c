/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:56:37 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/15 19:38:53 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	c;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	p = 0;
	c = ft_strlen(dest);
	while (src[p] != '\0' && c + 1 < size)
	{
		dest[c] = src[p];
		p++;
		c++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[p]));
}
