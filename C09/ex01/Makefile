# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 11:23:19 by jrenault          #+#    #+#              #
#    Updated: 2022/07/28 11:30:08 by jrenault         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

HEADERS = includes/ft.h

.c.o	:
			gcc -Wall -Werror -Wextra ${HEADERS} -c $< -o ${<:.c=.o}
${NAME} : ${OBJS}

all: ${NAME}

clean :
			rm -f ${OBJS}
fclean : clean
			rm -f ${NAME}
re : flclean all