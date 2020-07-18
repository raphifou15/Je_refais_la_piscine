/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:46:54 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/18 17:12:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	(n < 0) ? ft_putchar('-') : n;
	n = (n < 0) ? n * -1 : n;
	(n < 10) ? ft_putchar(n + 48) : ft_putnbr(n / 10);
	(n > 9) ? ft_putchar((n % 10) + 48) : n;
}
