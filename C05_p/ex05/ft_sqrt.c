/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:08:55 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/16 09:34:15 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{	
	int	res;

	res = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (res * res <= nb && res <= 46341)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
int main()
{
	//int n = 2147483627;
	int n = 17;
	int test;
	test = ft_sqrt(n);
	printf("%d\n",test);
}
*/
