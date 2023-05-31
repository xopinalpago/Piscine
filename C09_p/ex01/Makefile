# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmeriau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 18:28:49 by rmeriau           #+#    #+#              #
#    Updated: 2023/02/23 09:36:13 by rmeriau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
EXEC = ${SRCS:.c=.o}

all:	$(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -I includes -c $< -o ${<:.c=.o}

$(NAME):	$(EXEC)
	ar -cr $(NAME) $(EXEC)

clean:
	rm -f $(EXEC)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
