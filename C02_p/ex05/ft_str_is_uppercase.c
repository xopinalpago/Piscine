/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:20:43 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 64 || str[i] >= 91)
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

        printf("%i\n",ft_str_is_uppercase(test));
        printf("%i\n",ft_str_is_uppercase(test2));

        printf("%i\n",ft_str_is_uppercase(""));
        return (0);
}
*/
