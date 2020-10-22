/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:42:14 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/22 15:13:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	n;

	n = nbr;
	(n < 0) ? ft_putchar('-') : 0;
	n = (n < 0) ? (n * (-1)) : n;
	(n > 9) ? ft_putnbr(n / 10) : ft_putchar(n + 48);
	(n > 9) ? ft_putchar((n % 10) + 48) : 0;
}
