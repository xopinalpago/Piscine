/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:25:18 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
        char test[]="tess";
        char test2[]="ERGSGT";
	char *output;

        printf("%s\n",ft_strupcase(test));
        printf("%s\n",ft_strupcase(test2));
        printf("%s\n",ft_strupcase(""));
	output=ft_strupcase(test);
	printf("%s\n",output);

        return (0);
}
*/
