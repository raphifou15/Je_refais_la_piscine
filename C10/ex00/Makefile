# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/31 11:34:49 by rkhelif           #+#    #+#              #
#    Updated: 2020/08/31 13:58:13 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = main.c \
		ft_putstr.c \
		ft_checkargc.c \
		ft_open_and_readfile.c
OBJS = ${SRC:.c=.o}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
