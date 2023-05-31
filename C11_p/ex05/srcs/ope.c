/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:01:10 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 10:20:49 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op.h"

int	add(int x, int y)
{
	return (x + y);
}

int	sub(int x, int y)
{
	return (x - y);
}

int	div(int x, int y)
{
	return (x / y);
}

int	mult(int x, int y)
{
	return (x * y);
}

int	mod(int x, int y)
{
	return (x % y);
}
