/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:59:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/24 10:13:09 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar(45);
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar(45);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	void			(*ptr)(int);
	int				i;

	i = 0;
	ptr = f;
	while (i < length)
	{
		(ptr)(tab[i]);
		i++;
	}
}
/*
int	main()
{
	int	test[] = {1, 150, 38};
	ft_foreach(test, 3, &ft_putnbr);
}
*/
