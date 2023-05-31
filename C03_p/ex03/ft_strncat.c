/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:20:46 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/13 09:11:19 by rmeriau          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				len_dest;

	j = 0;
	len_dest = ft_strlen(dest);
	while (src[j] != '\0' && j < nb)
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
    strncat(example, "ForGeeks",15);
    printf("%s\n", example);
    char example2[100];
    strcpy(example2, "Geeks");
    ft_strncat(example2, "ForGeeks",15);
    printf("%s\n", example2);
}
*/
