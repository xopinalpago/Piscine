/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:48:57 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/15 09:12:21 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == '-' || base[i] == '+')
		{
			return (1);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
			{
				return (1);
			}	
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	lnbr;

	lnbr = nbr;
	len = ft_strlen(base);
	if (len <= 1 || ft_error(base))
	{
		return ;
	}
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr > len - 1)
	{
		ft_putnbr_base(lnbr / len, base);
		ft_putnbr_base(lnbr % len, base);
	}
	else
	{
		ft_putchar(base[lnbr]);
	}
}
/*
int main()
{
	char tbase[]="01";
	int tnbr = 150;
	ft_putnbr_base(tnbr,tbase);

}
*/
