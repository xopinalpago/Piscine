/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:47:35 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/13 09:06:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	len_dest;

	j = 0;
	len_dest = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (dest);
}
/*
int main() {

    char example[100];
    strcpy(example, "Geeks");
    strcat(example, "ForGeeks");
    printf("%s\n", example);
    
    char example2[100];
    strcpy(example2, "Geeks");
    ft_strcat(example2, "ForGeeks");
    printf("%s\n", example2);
}
*/
