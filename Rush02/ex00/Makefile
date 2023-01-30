# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afarenc <afarenc@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 00:52:46 by mle-boud          #+#    #+#              #
#    Updated: 2022/07/23 16:16:14 by afarenc          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAG = -Wall -Wextra
NAME = bin/rush-02
SRC = srcs/main.c srcs/slice_numbers.c
OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : ${OBJ}
	@$(CC) ${OBJ} $(FLAG) -o $(NAME)

%.o : %.c
	@${CC} ${FLAG} -c $< -o $@

clean :
	@rm -rf ${OBJ}

fclean : clean
	@rm -rf $(NAME)

re : fclean all
