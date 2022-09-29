/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:09:43 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/13 12:26:52 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
		{
			str[p] += 32;
		}
		p++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "yEt AnOtHeR tEsT!!!";
	printf("%s", ft_strlowcase(str));
}
*/
