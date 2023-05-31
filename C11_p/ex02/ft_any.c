/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:14:02 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/25 20:59:45 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int		i;
	int		(*ptr)(char*);

	i = 0;
	ptr = f;
	while (tab[i] != 0)
	{
		if (ptr(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>
int	ft_test(char *str)
{
	if (*str == 'c')
		return (1);
	return (0);
}

int	main()
{
	char **test;
	test = malloc(3 * sizeof(char *));
	test[0] = "coucou";
	test[1] = "du sale";
	test[2] = 0;

	int res;
	res = ft_any(&test[1], ft_test);
	printf("%d\n", res);
}
*/
