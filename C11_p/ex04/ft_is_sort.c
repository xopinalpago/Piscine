/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:14:52 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/28 09:38:32 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	haut;
	int	bas;

	i = 0;
	haut = 0;
	bas = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			haut++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			bas++;
		i++;
	}
	if (haut == i || bas == i)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	compt(int x, int y)
{
	return (x - y);
}

int	main()
{
	int test[4] = {0,1,-5};
	int res;

	res = ft_is_sort(test, 3, &compt);
	printf("%d\n",res);
}
*/