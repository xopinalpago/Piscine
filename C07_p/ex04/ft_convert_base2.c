/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:17:27 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/20 08:59:15 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_minus(char *str, int *temp)
{
	int	switch_signe;
	int	i;
	int	cpt_sp;

	cpt_sp = 0;
	while ((str[cpt_sp] >= 9 && str[cpt_sp] <= 13) || str[cpt_sp] == 32)
		cpt_sp++;
	switch_signe = 1;
	i = cpt_sp;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			switch_signe = -1 * switch_signe;
		}
		i++;
	}
	*temp = i;
	return (switch_signe);
}

int	ft_error(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] >= 127)
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	test_in_base(char str, char *base)
{
	int	cpt_in_base;

	cpt_in_base = 0;
	while (base[cpt_in_base] != '\0')
	{
		if (str == base[cpt_in_base])
			return (1);
		cpt_in_base++;
	}
	return (0);
}

int	find_pos(char str2, char *base)
{
	int	temp_pos;
	int	pos;

	temp_pos = 0;
	pos = 0;
	while (base[temp_pos] != '\0')
	{
		if (base[temp_pos] == str2)
			pos = temp_pos;
		temp_pos++;
	}
	return (pos);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	number;
	int	d_nbr;
	int	len_base;

	len_base = 0;
	while (base[len_base] != '\0')
		len_base++;
	if (len_base <= 1 || ft_error(base))
		return (0);
	number = 0;
	signe = test_minus(str, &d_nbr);
	while (str[d_nbr] != '\0' && test_in_base(str[d_nbr], base))
	{
		number = number * len_base;
		number = number + find_pos(str[d_nbr], base);
		d_nbr++;
	}
	number = number * signe;
	return (number);
}
