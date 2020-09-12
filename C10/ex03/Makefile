# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/12 22:26:27 by rkhelif           #+#    #+#              #
#    Updated: 2020/09/13 00:26:16 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS =	main.c \
	ft_cut_str.c \
	ft_display_nbr0.c \
	ft_display_nbr0_c.c \
	ft_display_octet.c \
	ft_display_octet_c.c \
	ft_display_rest2.c \
	ft_display_rest.c \
	ft_display_str_hexa_invers2.c \
	ft_display_str_hexa_invers.c \
	ft_display_tab_fd_0.c \
	ft_display_tab_fd_0c.c \
	ft_error.c \
	ft_free.c \
	ft_hexdump.c \
	ft_hexdump_option_c.c \
	ft_infinity.c \
	ft_init_tab_octet.c \
	ft_join.c \
	ft_join_init.c \
	ft_memset.c \
	ft_open_and_read.c \
	ft_putchar.c \
	ft_put_in_str.c \
	ft_put_in_tab_and_display_fd_0.c \
	ft_put_in_tab_fd_0.c \
	ft_putnbr_longhexa.c \
	ft_putstr.c \
	ft_size_octet.c \
	ft_strcmp.c \
	ft_str_fd_0.c \
	ft_str_fd.c \
	ft_strlen.c \
	ft_strncpy.c \
	ft_display_str_hexa.c \
	ft_t_list_init.c \
	ft_display_str.c

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
