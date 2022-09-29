/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:44:43 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/28 11:52:01 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_final_strlen(char **strs, int size, int sep_lenght)
{
	int	final_lenght;
	int	i;

	final_lenght = 0;
	i = 0;
	while (i < size && strs[i] != NULL)
	{
		final_lenght += ft_strlen(strs[i]);
		final_lenght += sep_lenght;
		i++;
	}
	return (final_lenght);
}

char	*ft_str_cat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_lenght;
	int		i;
	char	*str;
	char	*dest;

	full_lenght = ft_final_strlen(strs, size, ft_strlen(sep));
	str = (char *)malloc((full_lenght + 1) * sizeof(char));
	dest = str;
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_str_cat(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_str_cat(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
	return (str);
}
