/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 18:33:16 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/18 15:25:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar3(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar3(a + 48, b + 48, c + 48);
				(a != 7) ? write(1, ", ", 2) : a;
			}
			c = 0;
		}
		b = 0;
	}
}
