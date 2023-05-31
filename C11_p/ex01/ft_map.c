/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:13:44 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 19:44:20 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	stock(int nb)
{
	return (nb + 2);
}
*/

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int			(*ptr)(int);
	int			*res;
	int			i;

	res = malloc(length * sizeof(int));
	if (!res)
		return (0);
	i = 0;
	ptr = f;
	while (i < length)
	{
		res[i] = (ptr)(tab[i]);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int	test[] = {1, 150, 38};
	int	*testr;

	testr = ft_map(test, 3, &stock);
	int	i;
	i = 0;
	while (i < 3)
	{
		printf("%d\n", testr[i]);
		i++;
	}
}
*/
