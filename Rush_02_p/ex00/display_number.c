/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:25:34 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:28:28 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "head_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_str_is_printable(char c)
{
	if (c <= 31 || c >= 127)
		return (0);
	return (1);
}

void	last_word(char *str, int test_d)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 2;
	while (ft_str_is_printable(str[i]) && str[i] != ':')
		i--;
	i++;
	while (str[i] == ' ')
		i++;
	if (test_d != 0)
		ft_putstr(" ");
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i - 1] == ' ')
			i++;
		ft_putchar(str[i]);
		i++;
	}
}
