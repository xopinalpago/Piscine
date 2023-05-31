/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:38:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/24 09:36:48 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_error(char *base);

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	len_number(int nbr, char *base_to)
{
	int	len;
	int	len_base;

	len = 0;
	len_base = ft_strlen(base_to);
	if (nbr < 0)
	{
		len = len + 1;
	}
	while (nbr / len_base != 0)
	{
		len = len + 1;
		nbr = nbr / len_base;
	}
	len = len + 1;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base, char *dest, int len_nbr)
{
	int				i;
	int				len_base;
	int				fin;
	long			nb;

	fin = -1;
	nb = nbr;
	len_base = ft_strlen(base);
	i = len_nbr - 1;
	if (nb < 0)
	{
		dest[0] = '-';
		fin = 0;
		nb = -1 * nb;
	}
	while (i > fin)
	{
		dest[i] = base[nb % len_base];
		nb = nb / len_base;
		i--;
	}
	dest[len_nbr] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	int				num;
	int				taille;

	if (ft_error(base_from) || ft_error(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	taille = len_number(num, base_to);
	dest = (char *)malloc((taille + 1) * sizeof(char *));
	if (!dest)
		return (0);
	ft_putnbr_base(num, base_to, dest, taille);
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main () {
        char test_str[20];
        char base_dec[11]="0123456789";
        char base_bin[3]="01";
        char *test;

        strcpy(test_str, "2147483647");
        test = ft_convert_base(test_str, base_dec, base_bin);
        printf("test = %s\n", test);
        return(0);
}

