/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:30:26 by rmeriau           #+#    #+#             */
/*   Updated: 2023/03/01 10:13:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int	test_in(char *str, char c, int loc)
{
	int 	i;

	i = 0;
	while (i < loc)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	test_in_str1(char *str, char c)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


int	main()
{
	char test1[] = "test";
	char test2[] = "saluut";
	int	i;

	i = 0;
	while (test1[i])
	{
		if (test_in(test1, test1[i], i))
			ft_putchar(test1[i]);
		i++;
	}
	i = 0;
	while (test2[i])
	{
		if (test_in(test2, test2[i], i))
			if (test_in_str1(test1, test2[i]))
				ft_putchar(test2[i]);
		i++;
	}

	
}