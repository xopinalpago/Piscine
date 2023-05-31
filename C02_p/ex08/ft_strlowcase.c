/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:27:14 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
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

        printf("%s\n",ft_strlowcase(test));
        printf("%s\n",ft_strlowcase(test2));
        printf("%s\n",ft_strlowcase(""));
	output=ft_strlowcase(test);
	printf("%s\n",output);

        return (0);
}
*/
