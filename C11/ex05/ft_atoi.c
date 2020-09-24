/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:25:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 20:12:26 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int i;
	int	sign;
	int	num;

	num = 0;
	sign = 0;
	i = -1;
	while ((str[++i]) && (str[i] == 32 || (str[i] > 6 && str[i] < 14)))
		;
	--i;
	while ((str[++i]) && (str[i] == '+' || str[i] == '-'))
		(str[i] == '-') ? sign++ : 0;
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		num *= 10;
		num = (num != 0) ? num + (str[i] - 48) : str[i] - 48;
		i++;
	}
	num = (sign % 2 == 1) ? num * -1 : num;
	return (num);
}
