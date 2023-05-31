/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_file.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:19:03 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/26 17:37:07 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_FILE_H
# define HEAD_FILE_H

# include <stdlib.h>

void	ft_putchar(char c);
int		ft_str_is_printable(char c);
void	last_word(char *str, int test_d);
void	ft_putstr(char *str);

int		test_input(char *str);
long	ft_atoi_unsi(char *str);
long	ft_atoi_unsi_dict(char *str);
char	*ft_putnbr_base(long nbr);

int		ft_strstr(char *str, char *to_find, int len_nb);
int		ft_strstr_digit(char *str, char to_find, int len_nb);
int		ft_find_nbr(char **sdict, char *nb, int len_nb);
int		ft_find_digit(char **sdict, char nb, int len_nb);

char	*temp_tab(char *nb, int test_c);
char	*temp_tab_find(char *nb, int test_c);

int		test_in_dict_2_digits(char **sdict, char *nb, int test_c, int test_d);
int		ft_print_3_digit2(char **sdict, char *nb, int test_d);
int		ft_print_3_digit(char **sdict, char *nb, int test_d);
int		ft_print_2_digit(char **sdict, char *nb, int test_d);
int		ft_print_1_digit(char **sdict, char *nb, int test_d);

int		test_sep(char c, char *charset);
int		len_tab(char *str, char *charset);
int		ft_len_word(char *str, char *charset, int loc);
char	*fill_word(char *str, char *charset, int loc);
char	**ft_split(char *str, char *charset);

char	*ft_cpy_full_nb(char *src, int k, int len);
char	*ft_cpy_nb(char *src, int k, int len);
int		count_centaines(char *str);
char	**ft_split_nb(char *str);

int		ft_strlen(char *str);

int		ft_split_number(char **sdict, char *nb, int test_d);
void	ft_free(char **to_malloc);
void	ft_all(char **sdict, char *nb);

int		ft_read_len(char *to_read);
char	*ft_dict_in_char(char *to_read);

int		test_main_entries(char **main_sdict, char **sdict);
int		test_double_key(char **sdict);
int		ft_test_dict(char *name_dict);

#endif
