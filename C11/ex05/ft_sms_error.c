/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sms_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 16:01:16 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/24 18:44:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_sms_error(int num)
{
	(num == 1) ? write(1, "0\n", 2) : 0;
	(num == 2) ? write(1, "Stop : division by zero\n", 24) : 0;
	(num == 3) ? write(1, "Stop : modulo by zero\n", 22) : 0;
	return (0);
}
