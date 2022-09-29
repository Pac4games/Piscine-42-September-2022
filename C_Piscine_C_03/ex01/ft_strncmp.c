/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:13:18 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/16 14:54:53 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	p;
	int				dif;

	p = 0;
	dif = 0;
	while ((p < n) && !dif && (s1[p] != '\0') && (s2[p] != '\0'))
	{
		dif = (unsigned char)s1[p] - (unsigned char)s2[p];
		p++;
	}
	if (p < n && !dif && (s1[p] == '\0' || s2[p] == '\0'))
		dif = (unsigned char)s1[p] - (unsigned char)s2[p];
	return (dif);
}
