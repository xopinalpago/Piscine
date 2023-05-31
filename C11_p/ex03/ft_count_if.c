/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:01:20 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/25 21:11:37 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		cpt;
	int		(*ptr)(char*);

	i = 0;
	cpt = 0;
	ptr = f;
	while (i < length)
	{
		if (ptr(tab[i]))
			cpt++;
		i++;
	}
	return (cpt);
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
	test[2] = "c";

	int res;
	res = ft_count_if(test, 3, ft_test);
	printf("%d\n", res);
}
*/
