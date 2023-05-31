/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:54:03 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 18:24:35 by jermarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "head_file.h"

int	ft_read_len(char *to_read)
{
	int		r_file;
	int		len;
	char	c;

	len = 0;
	r_file = open(to_read, O_RDONLY);
	if (r_file < 0)
		return (0);
	while (read(r_file, &c, 1))
		len = len + 1;
	close(r_file);
	return (len);
}

char	*ft_dict_in_char(char *to_read)
{
	int		r_file;
	char	c;
	char	*dict;
	int		i;

	i = 0;
	dict = malloc(sizeof(char *) * (ft_read_len(to_read) + 1));
	r_file = open(to_read, O_RDONLY);
	if (r_file < 0)
		return (0);
	while (read(r_file, &c, 1))
	{
		dict[i] = c;
		i++;
	}
	dict[i] = '\0';
	close(r_file);
	return (dict);
}
