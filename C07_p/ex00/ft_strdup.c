/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:00:30 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/21 09:23:10 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i ++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int				len;
	char			*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr = ft_strcpy(ptr, src);
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	char *test = "cou";
	char *ptr_test;
	
	ptr_test = ft_strdup(test);
	printf( "%s\n", ptr_test);
	return(0);
}
*/
