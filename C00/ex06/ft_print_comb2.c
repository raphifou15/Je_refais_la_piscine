/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 15:38:05 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/18 16:31:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	write(1, " ", 1);
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (++a < 99)
	{
		b = a;
		while (++b <= 99)
		{
			ft_print_numbers(a, b);
			(a != 98) ? write(1, ", ", 2) : a;
		}
		b = 0;
	}
}
