/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_digits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:16:46 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:19:06 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_file.h"

int	ft_strstr(char *str, char *to_find, int len_nb)
{
	int	j;
	int	cpt;
	int	cpt_to_find;

	j = 0;
	cpt = 0;
	cpt_to_find = 0;
	if (to_find[0] == '\0')
		return (0);
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
		j++;
	if (str[j] == '+')
		j++;
	while (str[j] == to_find[cpt_to_find])
	{
		cpt = cpt + 1;
		cpt_to_find++;
		j++;
		if (to_find[j] == '\0' && cpt == len_nb
			&& (str[j] < '0' || str[j] > '9'))
			return (1);
	}
	return (0);
}

int	ft_strstr_digit(char *str, char to_find, int len_nb)
{
	int	j;
	int	cpt;

	j = 0;
	cpt = 0;
	if (to_find == '\0')
		return (0);
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == 32)
		j++;
	if (str[j] == '+')
		j++;
	while (str[j] == to_find)
	{
		cpt = cpt + 1;
		j++;
		if (cpt == len_nb && (str[j] < '0' || str[j] > '9'))
			return (1);
	}
	return (0);
}

int	ft_find_nbr(char **sdict, char *nb, int len_nb)
{
	int	i;

	i = 0;
	while (sdict[i] != 0)
	{
		if (ft_strstr(sdict[i], nb, len_nb))
			return (i);
		i++;
	}
	return (-1);
}

int	ft_find_digit(char **sdict, char nb, int len_nb)
{
	int	i;

	i = 0;
	while (sdict[i] != 0)
	{
		if (ft_strstr_digit(sdict[i], nb, len_nb))
			return (i);
		i++;
	}
	return (-1);
}
