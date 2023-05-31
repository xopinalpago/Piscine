/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:31:10 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/16 08:33:38 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	temp_power;
	int	i;

	i = 1;
	temp_power = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		temp_power = temp_power * nb;
		i++;
	}
	return (temp_power);
}
/*
int main()
{
	int n = 0;
	int p = 5;
	int test ;

	test = ft_iterative_power(n, p);
	printf("%d\n",test);
}
*/
