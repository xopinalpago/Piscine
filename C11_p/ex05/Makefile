# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmeriau <rmeriau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 14:27:30 by jermarti          #+#    #+#              #
#    Updated: 2023/02/28 14:04:28 by rmeriau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/main.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ope.c\

OBJS = ${SRC:.c=.o}

CFLAG = -Wall -Wextra -Werror

HEAD = ./includes/

.c.o:
	cc ${CFLAG} -I ${HEAD} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	cc ${CFLAG} -I $(HEAD) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
