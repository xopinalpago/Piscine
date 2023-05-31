/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:37:38 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/21 09:37:47 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
int main()
{
	int min_test = -2;
	int max_test = 10;
	int *ret;
	int i = 0;
	int taille = 0;
	taille = ft_ultimate_range(&ret, min_test, max_test);
	while ( i < max_test - min_test)
	{
		printf("%d\n", ret[i]);
		i++;
	}
}
*/
