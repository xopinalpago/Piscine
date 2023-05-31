/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:09:54 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/14 19:32:59 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

int main()
{
    // Take any two strings
    char s1[] = "GeekfoGffraa";
    char s2[] = "for";
    char *p;
    char *ret;

    // Find first occurrence of s2 in s1
    p = ft_strstr(s1, s2);

    // Prints the result
    if (p) {
        printf("String found %s\n",p);
    } else
	printf("String not found\n");

    ret = strstr(s1, s2);
    printf("The substring is: %s\n", ret);

    return 0;
}

