/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:39:19 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/23 20:23:56 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char *charset, char c)
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

int	ft_len_tot(char *s, char *c)
{
	int	i;
	int	len_tot;

	i = 0;
	len_tot = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && check_sep(c,s[i]))
			i++;
		if (s[i] != '\0')
			len_tot = len_tot + 1;
		while (s[i] != '\0' && !check_sep(c,s[i]))
			i++;
	}
	return (len_tot);
}

int	ft_strlen(char *s, char *c, int loc)
{
	int	i;
	int	diff;

	i = loc;
	while (s[i] != '\0')
	{
		if (check_sep(c, s[i]))
			break;	
		i++;
	}
	diff = i - loc;
	return (diff);
}

char	*fill_word(char *s, char *c, int loc)
{
	int	size;
	int	i;
	char	*word;
	
	i = 0;
	size = ft_strlen(s, c, loc);
	word = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		word[i] = s[loc + i];	
		i++;
	}
	word[size] = '\0';
	return (word);
}

char	**ft_split(char *s, char *c)
{
	int	i;
	int	len_tot;
	int	cpt;
	char	**res;
	
	len_tot = ft_len_tot(s, c);
	res = (char **)malloc(sizeof(char *) * (len_tot + 1));
	i = 0;
	cpt = 0;
        while (s[i] != '\0')
        {
                while (s[i] != '\0' && check_sep(c,s[i]))
                        i++;
                if (s[i] != '\0')
		{
			res[cpt] = fill_word(s, c, i);
                        cpt = cpt + 1;
		}
		while (s[i] != '\0' && !check_sep(c,s[i]))
                        i++;
        }
	res[len_tot] = 0;
	return (res);
}


#include <stdio.h>
int	main()
{
	char test_char[] = "";
	char test_s[] = "";
	char **ret;	
	int	i;

	i = 0;
	ret = ft_split(test_s, test_char);
	while (ret[i])
	{
		printf("%s\n", ret[i]);
		i++;
	}
}
