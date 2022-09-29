/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:45:38 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/13 12:07:50 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] -= 32;
		}
		p++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "tHiS iS a TeSt";
	printf("%s", ft_strupcase(str));
}
*/
