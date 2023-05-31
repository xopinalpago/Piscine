/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:20:03 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 96 || str[i] >= 123)
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

        printf("%i\n",ft_str_is_alpha(test));
        printf("%i\n",ft_str_is_alpha(test2));

        printf("%i\n",ft_str_is_alpha(""));
        return (0);
}
*/
