/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_palyndrome.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:22:36 by rmeriau           #+#    #+#             */
/*   Updated: 2023/03/01 11:24:51 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_palyndrome(char *str)
{
	int	i;
	int	len;
	int	cpt;

	i = 0;
	len = ft_strlen(str);
	cpt = 0;
	while (i < len / 2)
	{
		if (str[i] == str[len - i - 1])
			cpt++;
		i++;
	}
	if (cpt == len / 2)
		return (1);
	return (0);
}


int	main()
{
	char test[] = "salut";
	printf("%d\n",is_palyndrome(test));	
}
