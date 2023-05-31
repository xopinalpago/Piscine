/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:38:05 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 19:14:02 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "head_file.h"

void	one_args(char *arg_num)
{
	char	*tdict;
	char	**stdict;
	char	*num;
	long	nb;

	tdict = ft_dict_in_char("numbers.dict");
	stdict = ft_split(tdict, "\n");
	if (!test_double_key(stdict))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	nb = ft_atoi_unsi(arg_num);
	if (nb == -1)
	{
		ft_putstr("Error\n");
		return ;
	}
	num = ft_putnbr_base(nb);
	ft_all(stdict, num);
	ft_free(stdict);
	ft_putstr("\n");
}

void	two_args(char *arg_num, char *name_dict)
{
	char	*tdict;
	char	**stdict;
	char	*num;
	long	nb;

	if (!ft_dict_in_char(name_dict))
	{
		ft_putstr("Dict Error\n");
		return ;
	}
	tdict = ft_dict_in_char(name_dict);
	stdict = ft_split(tdict, "\n");
	nb = ft_atoi_unsi(arg_num);
	if (nb == -1)
	{
		ft_putstr("Error\n");
		return ;
	}
	num = ft_putnbr_base(nb);
	ft_all(stdict, num);
	ft_free(stdict);
	ft_putstr("\n");
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("Error\n");
	else if (argc >= 4)
		ft_putstr("Error\n");
	else if (argc == 2)
	{
		if (test_input(argv[1]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		one_args(argv[1]);
	}
	else if (argc == 3)
	{
		if (test_input(argv[1]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		two_args(argv[1], argv[2]);
	}
	return (0);
}
