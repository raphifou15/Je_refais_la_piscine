# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/01 22:59:33 by rkhelif           #+#    #+#              #
#    Updated: 2020/09/04 00:50:18 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = ft_tail
SRCS = ft_check_letter.c \
		ft_check_tail.c \
		ft_error2.c \
		ft_error.c \
		ft_lines.c \
		ft_nbr_octet.c \
		ft_open_and_read_from_end_file2.c \
		ft_open_and_read_from_end_file.c \
		ft_put_header.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_tail.c \
		ft_tail_option_c.c \
		ft_unsigned_long_atoi.c \
		main.c

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all
