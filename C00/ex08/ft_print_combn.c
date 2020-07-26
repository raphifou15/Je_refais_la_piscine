/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:08:59 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/26 14:41:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int *tab, int n)
{
	int i;

	i = -1;
	while (++i < n)
		ft_putchar(tab[i] + 48);
}

void	ft_print_next_combn(int n, int *tab, int *tab_ref, int i)
{
	int	j;
	int	limit;

	j = i;
	limit = 10 - n;
	while (tab[0] <= limit)
	{
		(tab[i] > 9) ? tab[i] : ft_display(tab, n);
		(tab[0] == limit || tab[i] > 9) ? tab[0] : write(1, ", ", 2);
		if (tab[i] > 9)
		{
			while (j > 0)
			{
				if (tab_ref[j] < tab[j])
				{
					tab[j] = tab[j - 1] + 1;
					tab[j - 1]++;
				}
				j--;
			}
		}
		j = n - 1;
		tab[i]++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;
	int limit;
	int tab_ref[10];
	int j;

	limit = 10 - n;
	i = -1;
	j = -1;
	while ((i + 1) < n && ++i < n)
		tab[i] = i;
	while ((j + 1) < n && ++j < n)
		tab_ref[j] = limit + j;
	ft_print_next_combn(n, tab, tab_ref, i);
}
