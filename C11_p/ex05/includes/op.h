/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:01:50 by rmeriau           #+#    #+#             */
/*   Updated: 2023/02/27 19:20:55 by rmeriau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OP_H
# define OP_H

# include <unistd.h>

int		add(int x, int y);
int		sub(int x, int y);
int		div(int x, int y);
int		mult(int x, int y);
int		mod(int x, int y);
int		ft_atoi(char *str);
int		ft_strlen(char	*str);
void	ft_putnbr(int nb);
void	ft_putstr(char	*str);

#endif