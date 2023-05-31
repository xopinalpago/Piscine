/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:47:48 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/23 18:51:58 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c, char *s1, int loc)
{
	int	i;

	i = 0;
	while (i < loc)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check2(char c, char *s1)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return(1);
		i++;
	}
	return (0);

}
void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!check(s1[i], s1, i))
			write(1,&s1[i],1);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
        {
		if (!check2(s2[i],s1))
                	if (!check(s1[i], s1, i))
                        	write(1,&s2[i],1);
                i++;
        }
}


int	main()
{
	char str1[] = "Teest";
	char str2[] = "seddts2";
	ft_union(str1,str2);
}
