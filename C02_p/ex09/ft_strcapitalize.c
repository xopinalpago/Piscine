/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:39:37 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/12 10:29:07 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_test_upper(int test, int i, char *str)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (test == 1)
		{
			str[i] = str[i] - 32;
			test = 0;
		}
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		test = 0;
	}
	else
	{
		test = 1;
	}
	return (test);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	test_upper;

	i = 0;
	test_upper = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		test_upper = ft_test_upper(test_upper, i, str);
		i++;
	}
	return (str);
}

/*
int main()
{
        char test[]="tess";
        char test2[]="ERGSGT";
	char test3[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

        printf("%s\n",ft_strcapitalize(test));
        printf("%s\n",ft_strcapitalize(test2));
	printf("%s\n",ft_strcapitalize(test3));
	printf("%s\n",ft_strcapitalize(""));

        return (0);
}
*/
