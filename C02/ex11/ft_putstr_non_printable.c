/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 17:07:38 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/30 18:18:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(char c, int n)
{
	char	tab[16];
	int		d;
	int		k;

	while (++n < 16)
		tab[n] = (n < 10) ? n + 48 : n + 87;
	d = c / 16;
	k = c % 16;
	k = tab[k];
	ft_putchar('\\');
	ft_putchar(d + 48);
	ft_putchar(k);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		(str[i] > 0 && str[i] < 32) ? ft_hexa(str[i], -1) : ft_putchar(str[i]);
}
