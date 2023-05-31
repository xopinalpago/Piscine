/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:04:04 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:15:36 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_number(long nbr)
{
	int	len;

	len = 0;
	while (nbr / 10 != 0)
	{
		len = len + 1;
		nbr = nbr / 10;
	}
	len = len + 1;
	return (len);
}

char	*ft_putnbr_base(long nbr)
{
	int		i;
	int		taille;
	char	*dest;

	taille = len_number(nbr);
	dest = (char *)malloc((taille + 1) * sizeof(char *));
	i = taille - 1;
	while (i > -1)
	{
		dest[i] = nbr % 10 + 48;
		nbr = nbr / 10;
		i--;
	}
	dest[taille] = '\0';
	return (dest);
}
