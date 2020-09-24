/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:37:31 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 20:09:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
#define FT_DO_OP_H

#include <unistd.h>

int		main(int argc, char *argv[]);
void	ft_do_op(int argc, char *argv[]);
int		ft_strlen(char *str);
int		ft_error(int argc, char *argv[]);
int		ft_sms_error(int num);
int		ft_atoi(char *str);
int		ft_calcul(int num1, char c, int num2);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);

#endif
