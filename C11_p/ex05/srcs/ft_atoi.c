/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:13:28 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 19:21:47 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_spaces(char *str)
{
	int	cpt_sp;

	cpt_sp = 0;
	while ((str[cpt_sp] >= 9 && str[cpt_sp] <= 13) || str[cpt_sp] == 32)
	{
		cpt_sp++;
	}
	return (cpt_sp);
}

int	test_minus(char *str, int ctp_spaces, int *temp)
{
	int	switch_signe;
	int	j;

	switch_signe = 1;
	j = ctp_spaces;
	while (str[j] == 45 || str[j] == 43)
	{
		if (str[j] == 45)
		{
			switch_signe = -1 * switch_signe;
		}
		j++;
	}
	*temp = j;
	return (switch_signe);
}

int	ft_atoi(char *str)
{
	int	space;
	int	signe;
	int	number;
	int	i;

	space = 0;
	signe = 0;
	number = 0;
	space = test_spaces(str);
	signe = test_minus(str, space, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + str[i] - 48;
		i++;
	}
	number = number * signe;
	return (number);
}
