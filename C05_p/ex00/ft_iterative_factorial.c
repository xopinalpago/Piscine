/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:00:05 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/15 14:07:04 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	unsigned int	temp_fact;
	int				i;

	i = 1;
	temp_fact = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		temp_fact = temp_fact * i;
		i++;
	}
	return (temp_fact);
}
/*
int main()
{
	int n = -58;
	int test ;

	test = ft_iterative_factorial(n);
	printf("%d\n",test);
}
*/
