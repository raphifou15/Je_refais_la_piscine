/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:44:40 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 01:15:30 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void			ft_putstr(char *str);
int				ft_check_tail(int argc, char *argv[], int option);
int				ft_strcmp(char *str1, char *str2);
void			ft_tail(int argc, char *argv[]);
unsigned long	ft_unsigned_long_atoi(char *str);
void			ft_tail_option_c(int argc, char *argv[]);
int				ft_open_and_read_from_end_file(char *file, int argc, int x);
int				ft_error(int n, char *str, int x);
unsigned long	ft_lines(char *file);
void			ft_put_header(char *file, int x);
unsigned long	ft_check_letter(char *str, unsigned long nbr,
					int i, char *str2);
unsigned long	ft_error2(char *str, int er);
unsigned long	ft_nbr_octet(char *file);
int				ft_open_and_read_from_end_file2(char *file, int argc,
					int x, unsigned long num);

#endif
