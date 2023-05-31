/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_in_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:34:41 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:39:32 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_file.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_split_number(char **sdict, char *nb, int test_d)
{
	int	len_nb;

	len_nb = ft_strlen(nb);
	if (len_nb == 3)
		test_d = ft_print_3_digit(sdict, nb, test_d);
	else if (len_nb == 2)
		test_d = ft_print_2_digit(sdict, nb, test_d);
	else if (len_nb == 1)
		test_d = ft_print_1_digit(sdict, nb, test_d);
	return (test_d);
}

void	ft_free(char **to_malloc)
{
	int	i;

	i = 0;
	while (to_malloc[i])
	{
		free(to_malloc[i]);
		i++;
	}
	free(to_malloc);
}

void	ft_all(char **sdict, char *nb)
{
	int		k;
	int		test_d;
	char	**snb;

	test_d = 0;
	snb = ft_split_nb(nb);
	k = count_centaines(nb) - 1;
	while (k >= 0)
	{
		test_d = ft_split_number(sdict, snb[k], test_d);
		if (k == 3)
			last_word(sdict[ft_find_nbr(sdict, "1000000000", 10)], test_d);
		else if (k == 2 && (snb[2][0] != '0'
			|| snb[2][1] != '0' || snb[2][2] != '0'))
			last_word(sdict[ft_find_nbr(sdict, "1000000", 7)], test_d);
		else if (k == 1 && (snb[1][0] != '0'
			|| snb[1][1] != '0' || snb[1][2] != '0'))
			last_word(sdict[ft_find_nbr(sdict, "1000", 4)], test_d);
		test_d++;
		k--;
	}
	ft_free(snb);
}
