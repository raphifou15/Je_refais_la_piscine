# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/24 20:17:15 by rkhelif           #+#    #+#              #
#    Updated: 2020/09/24 20:37:17 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = do-op
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = ft_atoi.c	\
		ft_calcul.c	\
		ft_do_op.c	\
		ft_error.c	\
		ft_putchar.c	\
		ft_putnbr.c	\
		ft_sms_error.c	\
		ft_strlen.c	\
		main.c
OBJS = ${SRCS:.c=.o}

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
