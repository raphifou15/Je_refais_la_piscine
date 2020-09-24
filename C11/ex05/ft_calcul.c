/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:30:11 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 20:05:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_calcul(int num1, char c, int num2)
{
	if (c == '+')
		return (num1 + num2);
	if (c == '-')
		return (num1 - num2);
	if (c == '*')
		return (num1 * num2);
	return (c == '/') ? num1 / num2 : num1 % num2;
}
