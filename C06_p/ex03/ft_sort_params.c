/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:01:14 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/17 09:41:15 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
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

char	**ft_sort_int_tab(char **tab, int size)
{
	char	*temp;
	int		i;

	while (size > 0)
	{
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i ++;
		}
		size --;
	}
	return (tab);
}

int	main(int argc, char *argv[])
{
	char	**temp_tab;
	int		i;

	i = 1;
	temp_tab = ft_sort_int_tab(argv, argc);
	while (i < argc)
	{
		ft_print(temp_tab[i]);
		i++;
	}
}
