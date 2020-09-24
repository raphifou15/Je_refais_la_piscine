/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:45:53 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 20:09:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_error(int argc, char *argv[])
{
	int	(*error)(int);
	int	num;

	error = ft_sms_error;
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
		return (error(1));
	if (argv[2][0] != '+' && argv[2][0] != '-' &&
		argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '%')
		return (error(1));
	num = ft_atoi(argv[3]);
	if (argv[2][0] == '/' && num == 0)
		return (error(2));
	if (argv[2][0] == '%' && num == 0)
		return (error(3));
	return (1);
}
