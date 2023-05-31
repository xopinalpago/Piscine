/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalino- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:03:54 by dvalino-          #+#    #+#             */
/*   Updated: 2023/02/11 17:05:37 by dvalino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_last_lines(int x)
{
	int	i;

	i = x;
	if (x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('A');
		i--;
		while (i - 1 > 0)
		{
			ft_putchar('B');
			i--;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	ft_mid_lines(int x, int y)
{
	int	i;

	while (y - 1 > 0)
	{
		i = x;
		ft_putchar('B');
		while (i - 2 > 0)
		{
			ft_putchar(' ');
			i--;
		}
		if (i != 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y != 1)
		{
			ft_first_last_lines(x);
		}
		y --;
		ft_mid_lines(x, y);
		ft_first_last_lines(x);
	}
}
