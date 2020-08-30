# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/30 08:54:39 by rkhelif           #+#    #+#              #
#    Updated: 2020/08/30 10:46:21 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c
PATH_SRCS = ./srcs/
PATH_HEADER = ./includes/
_SRCS = ${addprefix ${PATH_SRCS}, ${SRCS}}
OBJS = ${_SRCS:.c=.o}
CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
LINK = ar rc

all: libft.a

.c.o:
	${CC} ${FLAGS} -I${PATH_HEADER} -c $< -o ${<:.c=.o}
	
libft.a: ${OBJS}
	${LINK} libft.a ${OBJS}
	ranlib libft.a

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} libft.a

re: fclean all
