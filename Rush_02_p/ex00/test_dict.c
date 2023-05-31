/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:14:44 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:53:38 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "head_file.h"

int	test_main_entries(char **main_sdict, char **sdict)
{
	int	i;
	int	j;
	int	test;

	i = 0;
	test = 0;
	while (main_sdict[i])
	{
		j = 0;
		while (sdict[j])
		{
			if (ft_atoi_unsi_dict(main_sdict[i]) == ft_atoi_unsi_dict(sdict[j]))
				test = 1;
			j++;
		}
		if (!test)
			return (0);
		i++;
		test = 0;
	}
	return (1);
}

int	test_double_key(char **sdict)
{
	int	i;
	int	j;
	int	test;

	i = 0;
	test = 0;
	while (sdict[i])
	{
		j = i + 1;
		while (sdict[j])
		{
			if (ft_atoi_unsi_dict(sdict[i]) == ft_atoi_unsi_dict(sdict[j]))
				test = 1;
			j++;
		}
		if (test)
			return (0);
		i++;
		test = 0;
	}
	return (1);
}

int	ft_test_dict(char *name_dict)
{
	char	**main_sdict;
	char	**sdict;

	main_sdict = ft_split(ft_dict_in_char("numbers.dict"), "\n");
	sdict = ft_split(ft_dict_in_char(name_dict), "\n");
	if (!test_main_entries(main_sdict, sdict))
	{
		ft_putstr("test");
		ft_free(sdict);
		ft_free(main_sdict);
		return (0);
	}
	if (!test_double_key(sdict))
	{
		ft_putstr("test");
		ft_free(sdict);
		ft_free(main_sdict);
		return (0);
	}
	ft_free(sdict);
	ft_free(main_sdict);
	return (1);
}
