/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_temp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:12:52 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:20:40 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "head_file.h"

char	*temp_tab(char *nb, int test_c)
{
	char	*temp;

	temp = malloc(sizeof(char) * 3);
	temp[0] = nb[1 - test_c];
	if (temp[0] == '1')
		temp[1] = nb[2 - test_c];
	else
		temp[1] = '0';
	temp[2] = '\0';
	return (temp);
}

char	*temp_tab_find(char *nb, int test_c)
{
	char	*temp;

	temp = malloc(sizeof(char) * 3);
	temp[0] = nb[1 - test_c];
	temp[1] = nb[2 - test_c];
	temp[2] = '\0';
	return (temp);
}
