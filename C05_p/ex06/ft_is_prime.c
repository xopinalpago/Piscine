/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:34:25 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/16 09:49:02 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{	
	int	prime;

	prime = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (prime <= (nb / prime))
	{
		if (nb % prime == 0)
		{
			return (0);
		}
		prime++;
	}
	return (1);
}
/*
int main()
{
	//int n = 2147483647;
	int n = 29;
	int test;
	test = ft_is_prime(n);
	printf("%d\n",test);
}
*/
