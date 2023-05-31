/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:33:15 by rmeriau           #+#    #+#             */
/*   Updated: 2023/03/02 17:22:53 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_wdmatch(char *str, char *to_find)
{
	int	i = 0;
	int	j = 0;
	int cpt = 0;

	while (to_find[i])
	{
		while (str[j])
		{
			if (str[j] == to_find[i])
			{
				i++;
				cpt++;
			}
			j++;
		}
		i++;
	}
	return (cpt);
}


int	main()
{
	char in[] = "";
	char to[] = "coacoa";
	printf("%d\n",ft_wdmatch(to, in));
}


