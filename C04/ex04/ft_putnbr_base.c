/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:46:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/04 10:36:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base, int i, int j)
{
	if (base == NULL)
		return (0);
	while (base[++i])
		if (base[i] == '-' || base[i] == '+')
			return (0);
	if (i < 2)
		return (0);
	i = -1;
	while (base[++i])
	{
		while (base[++j + i + 1])
			if (base[i] == base[j + i + 1])
				return (0);
		j = -1;
	}
	return (1);
}

void	ft_putnbr(long nbr, char *base, int size)
{
	(nbr < size) ? ft_putchar(base[nbr]) : ft_putnbr(nbr / size, base, size);
	(nbr < size) ? nbr : ft_putchar(base[nbr % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	n;

	n = nbr;
	size = -1;
	if (ft_check_base(base, -1, -1) == 0)
		return ;
	while (base[++size])
		;
	(n < 0) ? write(1, "-", 1) : n;
	n = (nbr < 0) ? n * -1 : n;
	ft_putnbr(n, base, size);
}
