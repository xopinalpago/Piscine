/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:14:17 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/16 10:00:02 by rmeriau          ###   ########.fr       */
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
	while (prime <= nb / prime)
	{
		if (nb % prime == 0)
		{
			return (0);
		}
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (prime <= 2147483647)
	{
		if (ft_is_prime(prime))
		{
			return (prime);
		}
		prime++;
	}
	return (0);
}
/*
int main()
{
	//int n = 2147483647;
	int n = 17;
	int test;
	test = ft_find_next_prime(n);
	printf("%d\n",test);
}
*/
