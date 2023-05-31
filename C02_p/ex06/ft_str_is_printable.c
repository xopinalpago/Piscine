/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:22:10 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
        char test[]="tess";
        char test2[]="ERGSGT";

        printf("%i\n",ft_str_is_printable(test));
        printf("%i\n",ft_str_is_printable(test2));

        printf("%i\n",ft_str_is_printable(""));
        return (0);
}
*/
