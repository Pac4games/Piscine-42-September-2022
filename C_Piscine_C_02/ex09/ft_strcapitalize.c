/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:40:45 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/15 20:17:01 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
// "	"	"	= 1" means that c is low alpha;
// "	"	"	= 2" means that c is up alpha.
int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (2);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	p;

	p = 1;
	if (is_alpha(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[p] != '\0')
	{	
		if (is_alpha(str[p - 1]) == 0)
		{
			if (is_alpha(str[p]) == 1)
				str[p] -= 32;
		}
		else if (is_alpha(str[p]) == 2)
			str[p] += 32;
		p++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[] = "thiS*iS'A.tEst^sTriNg. PleAse-bE-NicE-tO-mE. fOr+reaL.";
	printf("%s", ft_strcapitalize(str));
}
*/
