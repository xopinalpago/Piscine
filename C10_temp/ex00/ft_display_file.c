/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:38:05 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/23 16:28:42 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_error(char	*str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

void    ft_putstr(char    *str)
{
        int     i;

        i = 0;
        while (str [i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

int	ft_read(char *to_read)
{
	int	r_file;
	char	c;

        r_file = open(to_read,O_RDONLY);
        if (r_file < 0)
        {
		ft_putstr_error("Cannot read file.\n");
       		return (0);
       	}
	while (read(r_file, &c, 1))
		write(1,&c,1);
	close(r_file);
	return (1);
}

int	main(int argc, char *argv[])
{
	int r_file;

	if (argc == 1)
		ft_putstr_error("File name missing.\n");
	else if (argc > 2)
                ft_putstr_error("Too many arguments.\n");
	else
		ft_read(argv[1]);
	return (0);
}
