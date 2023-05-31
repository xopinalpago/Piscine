/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:14:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/13 09:55:34 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l_dest;
	unsigned int	l_src;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	i = 0;
	if (size == 0 || size <= l_dest)
	{
		return (size + l_src);
	}
	while (src[i] != '\0' && i < size - l_dest - 1)
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}
/*
int main()
{
    char buffer[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 5;

    r = ft_strlcat(buffer,last,size);

    //puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated\n");
    else
        puts("String was fully copied\n");

    printf("%s",buffer);
    return(0);
}
*/
