/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:48:14 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/13 21:01:18 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	if (c <= 31 || c >= 127)
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 0)
		{
			ft_putchar('\\');
			ft_putchar(hexa[str[i] / 16]);
			ft_putchar(hexa[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main()
{
	//char test[]="Coucou\ntu vas bien ?";
	char test[] = "./328blsd4khbhi1bu57ylvfk9";
	ft_putstr_non_printable(test);
}

