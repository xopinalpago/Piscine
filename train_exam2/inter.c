/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:54:17 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/23 19:12:38 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c, char *s, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}


void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				if (!check(s1[i],s1,i))
					write(1,&s1[i],1);
			j++;
		}
		i++;
	}
}

int	main()
{
	char	s1[] = "TEST";
	char	s2[] = "coucoEu";

	ft_inter(s1,s2);
}
