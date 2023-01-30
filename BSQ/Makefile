# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrenault <jrenault@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 21:16:24 by jrenault          #+#    #+#              #
#    Updated: 2022/07/26 13:49:49 by jrenault         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c check_error.c read_map.c tools.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= gcc
RM		= rm -f

CFlags = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS} "map.txt"

all:		${NAME}

clean:
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re