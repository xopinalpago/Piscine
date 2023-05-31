/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:25:50 by rmeriau           #+#    #+#             */
/*   Updated: 2023/03/01 12:02:10 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	test_in(char *str, char c, int loc)
{
	int	i;

	i = 0;
	while (i < loc)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char test1[] = "aa  ";
	char test2[] = "aa ";
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (test1[i])
	{
		j = 0;
		while (test2[j])
		{
			if (test1[i] == test2[j])
				if (test_in(test1, test1[i], i))
					if (test_in(test2, test2[j], j))
						ft_putchar(test1[i]);
			j++;
		}
		i++;
	}
}
