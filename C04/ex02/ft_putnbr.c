/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 21:29:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/03 21:59:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	(n < 0) ? write(1, "-", 1) : n;
	n = (n < 0) ? n * -1 : n;
	(n > 9) ? ft_putnbr(n / 10) : ft_putchar(n + 48);
	(n > 9) ? ft_putchar((n % 10) + 48) : n;
}
