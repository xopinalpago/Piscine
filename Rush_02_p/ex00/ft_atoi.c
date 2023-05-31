/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:16:52 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:41:42 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_file.h"

int	test_input(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

long	ft_atoi_unsi(char *str)
{
	unsigned int	i;
	long			nb;

	i = 0;
	nb = 0;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+')
		i++;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb > 4294967295)
			return (-1);
		i++;
	}
	return (nb);
}

int	test_signe(char *str, unsigned int *temp)
{
	int				signe;
	unsigned int	i;

	i = 0;
	signe = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	*temp = i;
	return (signe);
}

long	ft_atoi_unsi_dict(char *str)
{
	unsigned int	i;
	int				signe;
	long			nb;

	i = 0;
	nb = 0;
	signe = test_signe(str, &i);
	if (str[i] > 57 || str[i] < 48)
		return (-1);
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb > 4294967295)
			return (-1);
		i++;
	}
	if (signe * nb < 0)
		return (-1);
	return (nb);
}
