/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:11:46 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/17 14:34:01 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i]!='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i]!='\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char str)
{
	write(1, &str, 1);
}
/*
void	ft_putnbr(int nb)
{
	long int	lnbr;

	lnbr = (long int)nb;

	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr > 9)
	{
		ft_putnbr(lnbr / 10);
		ft_putnbr(lnbr % 10);
	}
	else
	{
		ft_putchar(lnbr + '0');
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++
	}
	return (s1[i] - s2[i]);
	
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != "\0")
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0;
	return (dest);
}


int	test_spaces(char *str)
{
	int	i;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	return (i);
}

int	is_neg(char *str, int cpt_spaces, int *temp)
{
	int	neg;
	int	j;

	neg = 1;
	j = cpt_spaces;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
		{
			neg = -1 * neg;
		}
		j++;
	}

	*temp = j;
	return (neg);
}
int	ft_atoi(char *str)
{
	int	d_nbr;
	int	number;
	int	nb_spaces;
	int	signe;

	number = 0;
	nb_spaces = test_spaces(str);
	signe = is_neg(str, nb_spaces, &d_nbr);
	while (str[d_nbr] != '\0' && str[d_nbr] >= '0' && str[d_nbr] <= '9')
	{
		number = number * 10;
		number = number + str[d_nbr] - 48;
		d_nbr++;
	}
	number = number * signe;
	return (number);

}

void	ft_putchar(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		ft_putstr(str[i]);
		i++;
	}
}

char	**inv_str(char **str)
{
	//int	i;

	//i = 0;
	return (str);
}


char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}	
		j = 0;
		i++;
	}
	return (0);
}


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
*/

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (size + len_src);

	while (src[i] != '\0' && i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}


int main()
{
	char test[] = "Salut";
	char test_find[] = "lu";
	char *fin;

	fin = strstr(test, test_find);
	if (fin)
		printf("%s\n",fin);
	else
		printf("rien");
	//int num_test;
	//int	i;
	//i = 0;
	//char	**test;
	//test = (char **)malloc(2 * sizeof(char *));
	//test[0] = (char *)malloc(5 * sizeof(char *));
	//test[1] = (char *)malloc(3 * sizeof(char *));	
	
/*	if (argc)
	{
		test[0] = argv[1];
		test[1] = argv[2];
		printf("%s",test[0]);
		printf("%s",test[1]);
	}*/
	//while (i < argc)
	//{
//		test = inv_str(argv);
//		ft_putchar(test[i]);
//		i++;
//		ft_putstr('\n');
//	}

	//printf("%s\n", test2);
	//num_test = ft_atoi(test);	
	//printf("%d\n", num_test);
}

