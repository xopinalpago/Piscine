/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:08:53 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:30:45 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "head_file.h"

int	test_in_dict_2_digits(char **sdict, char *nb, int test_c, int test_d)
{
	char	*temp;

	temp = temp_tab_find(nb, test_c);
	if (ft_find_nbr(sdict, temp, 2) != -1)
	{
		last_word(sdict[ft_find_nbr(sdict, temp, 2)], test_d);
		test_d++;
		free(temp);
		return (test_d);
	}
	free(temp);
	return (test_d);
}

int	ft_print_3_digit(char **sdict, char *nb, int test_d)
{
	char	*temp;

	if (nb[0] != '0')
	{
		last_word(sdict[ft_find_digit(sdict, nb[0], 1)], test_d);
		test_d++;
		last_word(sdict[ft_find_nbr(sdict, "100", 3)], test_d);
		test_d++;
	}
	if (nb[1] != '0')
	{
		if (nb[1] == '1' || (nb[1] != '0'))
		{
			temp = temp_tab(nb, 0);
			last_word(sdict[ft_find_nbr(sdict, temp, 2)], test_d);
			free(temp);
			test_d++;
		}
	}
	if (nb[2] != '0' && nb[1] != '1')
	{
		last_word(sdict[ft_find_digit(sdict, nb[2], 1)], test_d);
		test_d++;
	}
	return (test_d);
}

int	ft_print_2_digit(char **sdict, char *nb, int test_d)
{
	char	*temp;

	if (nb[0] != '0')
	{
		temp = temp_tab_find(nb, 1);
		if (ft_find_nbr(sdict, temp, 2) != -1)
		{
			last_word(sdict[ft_find_nbr(sdict, temp, 2)], test_d);
			test_d++;
			free(temp);
			return (test_d);
		}
		else if (nb[0] == '1' || (nb[0] != '0'))
		{
			last_word(sdict[ft_find_nbr(sdict, temp_tab(nb, 1), 2)], test_d);
			free(temp);
			test_d++;
		}
	}
	if (nb[1] != '0' && nb[0] != '1')
	{
		last_word(sdict[ft_find_digit(sdict, nb[1], 1)], test_d);
		test_d++;
	}
	return (test_d);
}

int	ft_print_1_digit(char **sdict, char *nb, int test_d)
{
	last_word(sdict[ft_find_digit(sdict, nb[0], 1)], test_d);
	test_d++;
	return (test_d);
}
