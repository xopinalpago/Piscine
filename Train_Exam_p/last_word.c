/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:18:21 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/24 13:50:00 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <unistd.h>
void	ft_putsr_last_word(char *str, int deb, int fin)
{
	int	i;

	i = deb;
	while(i <= fin)
	{
		if (str[i]>= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		i++;
	}
}



#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	len;
	(void) argc;
	len = ft_strlen(argv[1]);
	int	i;
	int	mot;
	int	index_fin;
	int	index_debut;
	index_debut = 0;
	index_fin = 0;
	mot = 0;
	i = len - 1;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (mot == 0)
			{
				mot = 1;
				index_fin = i;
			}
		}
		i--;
	}
	printf("fin = %d\n", index_fin);
	i = index_fin;
        while (argv[1][i] != '\0')
        {
		printf("lettre = %c\n", argv[1][i]);
                if (argv[1][i] < 'a' || argv[1][i] > 'z')
                {
                        if (mot == 1) 
                        {
                                index_debut = i;
				break ;
                        }
                }
                i--;
        }
	printf("debut = %d\n", index_debut);
	ft_putsr(argv[1], index_debut, index_fin);
}
	
