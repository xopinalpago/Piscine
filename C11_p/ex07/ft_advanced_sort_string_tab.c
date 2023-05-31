/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:24:50 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/28 14:19:33 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	tmp = 0;
	while (tab[i] != 0)
	{
		j = i;
		while (tab[j] != 0)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
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

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	**test;

	test = malloc(sizeof(char *) * 5);
	test[0] = "bb";
	test[1] = "aa";
	test[2] = "47";
	test[3] = ".a";
	test[4] = 0;
	
	ft_advanced_sort_string_tab(test, &ft_strcmp);
	
	int i = 0;
	while (test[i])
	{
		printf("%s\n",test[i]);
		i++;
	}	
}
*/