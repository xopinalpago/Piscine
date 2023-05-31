/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:50:49 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:08:14 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "head_file.h"

char	*ft_cpy_full_nb(char *src, int k, int len)
{
	int		i;
	char	*temp;

	i = 2;
	temp = (char *)malloc(sizeof(char) * (3 + 1));
	if (!temp)
		return (0);
	while (i >= 0)
	{
		temp[i] = src[len - (k + 1) * 3 + i];
		i--;
	}
	temp[3] = '\0';
	return (temp);
}

char	*ft_cpy_nb(char *src, int k, int len)
{
	int		i;
	char	*temp;

	i = (len % 3) - 1;
	temp = (char *)malloc(sizeof(char) * ((len % 3) + 1));
	if (!temp)
		return (0);
	while (i >= 0)
	{
		if (len % 3 == 1)
			temp[i] = src[len - k * 3 + i - 1];
		else
			temp[i] = src[len - k * 3 + i - 2];
		i--;
	}
	temp[(len % 3)] = '\0';
	return (temp);
}

int	count_centaines(char *str)
{
	int	len;
	int	k;

	len = ft_strlen(str);
	k = len / 3;
	if (len % 3 != 0)
		k = k + 1;
	return (k);
}

char	**ft_split_nb(char *str)
{
	int		k;
	int		len;
	int		num_centaines;
	char	**centaines;

	k = 0;
	num_centaines = count_centaines(str);
	len = ft_strlen(str);
	centaines = (char **)malloc(sizeof(char *) * (num_centaines + 1));
	if (!centaines)
		return (0);
	while (k < len / 3)
	{
		centaines[k] = ft_cpy_full_nb(str, k, len);
		k++;
	}
	if (len % 3 != 0)
	{
		centaines[k] = ft_cpy_nb(str, k, len);
	}
	centaines[num_centaines] = 0;
	return (centaines);
}
