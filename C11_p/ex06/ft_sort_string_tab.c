/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:47:00 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 20:26:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (tab[j] && ft_strcmp(tab[i], tab[j]) > 0)
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	**test;

	test = malloc(sizeof(char *) * 5);
	test[0] = "bb";
	test[1] = "aa";
	test[2] = "vv";
	test[3] = ".a";
	test[4] = 0;
	
	ft_sort_string_tab(test);
	
	int i = 0;
	while (test[i])
	{
		printf("%s\n",test[i]);
		i++;
	}
	
	
}
*/