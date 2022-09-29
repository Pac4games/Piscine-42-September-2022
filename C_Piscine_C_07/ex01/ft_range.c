/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:16:01 by paugonca          #+#    #+#             */
/*   Updated: 2022/09/26 16:15:37 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	a = min;
	while (a < max)
	{
		arr[i] = a;
		i++;
		a++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 0;
	int max = 42;
	int *nums = ft_range(min, max);

	while (min < max)
	{
		printf("%d ", nums[min]);
		min++;
	}
}
*/
