/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:16:20 by rmeriau           #+#    #+#             */
/*   Updated: 2023/03/02 09:44:43 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], sep))
			i++;
		if (str[i])
			cpt++;
		while (str[i] && !check_sep(str[i], sep))
			i++;
	}
	return (cpt);
}

int	len_word(char *str, char *sep, int loc)
{
	int	i;
	int	diff;

	i = loc;
	while (str[i] && !check_sep(str[i], sep))
	{
		i++;
	}
	diff = i - loc;
	return (diff);
}

char	*fill_word(char *str, char *sep, int loc)
{
	char	*word;
	int		len;
	int		i;

	len = len_word(str, sep, loc);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (str[loc + i] && !check_sep(str[loc + i], sep))
	{
		word[i] = str[loc + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		cpt;
	char	**res;

	res = malloc(sizeof(char *) * (count_words(str, sep) + 1));
	if (!res)
		return (0);
	i = 0;
	cpt = 0;
	while (str[i])
	{
		while (str[i] && check_sep(str[i], sep))
			i++;
		if (str[i])
		{
			res[cpt] = fill_word(str, sep, i);
			cpt++;
		}
		while (str[i] && !check_sep(str[i], sep))
			i++;
	}
	res[cpt] = 0;
	return (res);
}

int	main()
{
	char test[]="casdacdacadc";
	char stest[]="c ";
	char **sres;
	
	sres = ft_split(test, stest);
	int	i = 0;
	while (sres[i])
	{
		printf("%s\n", sres[i]);
		i++;
	}
}

