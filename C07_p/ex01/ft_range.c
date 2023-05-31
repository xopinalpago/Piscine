/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:35:49 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/21 09:27:22 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	len = max - min;
	ptr = (int *)malloc(len * sizeof(int));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	int min_test = -2;
	int max_test = 10;
	int *ret;
	int i = 0;
	ret = ft_range(min_test, max_test);
	while ( i < max_test - min_test)
	{
		printf("%d\n", ret[i]);
		i++;
	}
}
*/
