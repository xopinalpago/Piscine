/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:13:40 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/22 16:04:39 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	test_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	len_tab(char *str, char *charset)
{
	int	i;
	int	nb_tab;

	if (charset[0] == '\0')
		return (0);
	i = 0;
	nb_tab = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && test_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			nb_tab = nb_tab + 1;
		while (str[i] != '\0' && !test_sep(str[i], charset))
			i++;
	}
	return (nb_tab);
}

int	ft_len_word(char *str, char *charset, int loc)
{
	int	i;
	int	diff;

	i = loc;
	while (str[i] != '\0' && !test_sep(str[i], charset))
	{
		i++;
	}
	diff = i - loc;
	return (diff);
}

char	*fill_word(char *str, char *charset, int loc)
{
	int				len_word;
	int				i;
	char			*word;

	i = 0;
	len_word = ft_len_word(str, charset, loc);
	word = (char *)malloc((len_word + 1) * sizeof(char));
	while (i < len_word)
	{
		word[i] = str[loc + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int				len_fin;
	int				i;
	int				nb_tab;
	char			**res;

	i = 0;
	len_fin = len_tab(str, charset);
	res = (char **)malloc((len_fin + 1) * sizeof(char *));
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && test_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			res[nb_tab] = fill_word(str, charset, i);
			nb_tab = nb_tab + 1;
		}
		while (str[i] != '\0' && !test_sep(str[i], charset))
			i++;
	}
	res[nb_tab] = 0;
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "a q";
	char s2[] = "";
	char **test;
	int i = 0;
	
	test = ft_split(s1, 0);
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
*/
