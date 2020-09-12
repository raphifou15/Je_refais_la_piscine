/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 13:31:57 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 00:33:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_list
{
	unsigned long	octet;
	char			str[17];
	char			str_past[17];
	char			equal;
}				t_list;

int				main(int argc, char *argv[]);
void			ft_hexdump(int argc, char *argv[]);
int				ft_strcmp(char *str, char *str2);
void			ft_hexdump_option_c(int argc, char *argv[]);
t_list			ft_infinity(t_list tab, int x);
t_list			ft_t_list_init(void);
char			*ft_str_fd_0(void);
char			*ft_join(char *str, char c);
char			*ft_join_init(char *str, char c);
char			*ft_free(char *str);
unsigned long	ft_strlen(char *str);
t_list			ft_put_in_tab_and_display_fd_0(char *str, t_list tab, int x);
t_list			ft_put_in_str(char *str, t_list tab, unsigned long size);
t_list			ft_display_tab_fd_0(t_list tab);
void			ft_display_octet(unsigned long nbr);
char			*ft_init_tab_octet(char *tab);
unsigned long	ft_size_octet(unsigned long nbr);
void			ft_display_nbr0(unsigned long size);
void			ft_putnbr_longhexa(unsigned long nbr, char *tab);
void			ft_putchar(unsigned char c);
void			ft_display_str_hexa_invers(char *str);
char			*ft_cut_str(char *str, unsigned long size);
t_list			ft_put_in_tab_fd_0(t_list tab);
char			*ft_strncpy(char *dest, char *src, int nb);
void			*ft_memset(void *s, int c, size_t n);
t_list			ft_display_tab_fd_0c(t_list tab);
void			ft_display_octet_c(unsigned long nbr);
void			ft_display_nbr0_c(unsigned long size);
void			ft_display_str_hexa(char *str);
void			ft_display_str(char *str);
t_list			ft_open_and_read(char *str, t_list tab, int x);
char			*ft_error(int x, char *str, char *str2);
void			ft_putstr(char *str);
char			*ft_str_fd(char *str);
void			ft_display_rest(t_list tab);
void			ft_display_str_hexa_invers2(char *str);
void			ft_display_rest2(t_list tab);

#endif
