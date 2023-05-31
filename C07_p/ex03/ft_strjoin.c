/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:32:32 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/24 09:33:35 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	taille_tot(char **strs, char *sep, int size)
{
	int	cpt;
	int	i;

	cpt = 0;
	i = 0;
	while (i < size)
	{
		cpt = cpt + ft_strlen(strs[i]);
		i++;
	}
	cpt = cpt + (size - 1) * ft_strlen(sep);
	return (cpt);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		len_tot;
	int		i;

	if (size == 0)
	{
		ret = malloc(sizeof(char));
		*ret = 0;
		return (ret);
	}
	len_tot = taille_tot(strs, sep, size);
	ret = (char *)malloc((len_tot + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	*ret = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i < size - 1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}

#include <stdio.h>
int main()
{
	int s = 3;
	char **test_strs2;
	char test_sep[]="xx";
	char *res;

	test_strs2 = (char **)malloc(3 * sizeof(char *));
	test_strs2[0] = (char *)malloc(6 * sizeof(char));
	test_strs2[1] = (char *)malloc(3 * sizeof(char));
	test_strs2[2] = (char *)malloc(5 * sizeof(char));
        test_strs2[0] = "aaaaa";
        test_strs2[1] = "bb";
        test_strs2[2] = "cccc";
	res = ft_strjoin(s, test_strs2, test_sep);
	printf("%s\n", res);
	int t = ft_strlen(res);
	printf("t = %d\n",t);
}

