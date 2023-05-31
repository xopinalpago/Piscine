/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbocktor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:46:16 by jbocktor          #+#    #+#             */
/*   Updated: 2023/02/11 18:03:04 by dvalino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_first_last_lines(int x)
{
	int	i;

	i = x;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('o');
		i--;
		while (i - 1 > 0)
		{
			ft_putchar('-');
			i--;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	ft_mid_lines(int x, int y)
{
	int	i;

	while (y - 1 > 0)
	{
		i = x;
		ft_putchar('|');
		while (i - 2 > 0)
		{
			ft_putchar(' ');
			i--;
		}
		if (i != 1)
		{
			ft_putchar('|');
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
