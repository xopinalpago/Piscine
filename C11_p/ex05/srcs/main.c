/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:50:09 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 10:21:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int	ft_error_arg(char *arg2, char *arg3)
{
	if (ft_strlen(arg2) != 1)
	{
		ft_putstr("0\n");
		return (0);
	}
	if (arg2[0] != '+' && arg2[0] != '-' && arg2[0] != '/'
		&& arg2[0] != 42 && arg2[0] != '%')
	{
		ft_putstr("0\n");
		return (0);
	}
	if (arg2[0] == '/' && ft_atoi(arg3) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (arg2[0] == '%' && ft_atoi(arg3) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	operation(int x, char *c, int y)
{
	int	res;
	int	(*op[5])(int, int);

	op[0] = &add;
	op[1] = &sub;
	op[2] = &mult;
	op[3] = &div;
	op[4] = &mod;
	res = 0;
	if (c[0] == '+')
		res = op[0](x, y);
	else if (c[0] == '-')
		res = op[1](x, y);
	else if (c[0] == '*')
		res = op[2](x, y);
	else if (c[0] == '/')
		res = op[3](x, y);
	else if (c[0] == '%')
		res = op[4](x, y);
	return (res);
}

int	main(int argc, char *argv[])
{
	int	res;

	res = 0;
	if (argc == 4)
	{
		if (ft_error_arg(argv[2], argv[3]))
		{
			res = operation(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
			ft_putnbr(res);
			ft_putstr("\n");
		}
		else
			return (0);
	}
	else
		return (0);
}
