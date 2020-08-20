/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle_iteratif.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:51:44 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/20 19:52:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_checktab2(int *tab, int i)
{
	while (++i < 10)
	{
		if (i != 0 && tab[i] >= 10)
		{
			tab[i - 1]++;
			while (i < 10)
			{
				tab[i] = 0;
				i++;
			}
		}
	}
}

int		ft_checktab(int *tab, int i, int j, int x)
{
	while (++i < 9)
	{
		j = 10;
		while (--j > i)
		{
			while ((tab[j] == (tab[i] - (j - i))) ||
					(tab[j] == (tab[i] + (j - i))) || tab[j] == tab[i])
			{
				tab[j]++;
				ft_checktab2(tab, -1);
				x = 1;
			}
			if (x == 1)
				return (0);
		}
	}
	return (1);
}

int		ft_ten(int *tab, int nbr, int i)
{
	int	c;

	while (nbr < 724 && tab[0] < 10)
	{
		while (ft_checktab(tab, -1, 0, 0) == 0)
			;
		if (tab[0] < 10)
		{
			while (++i < 10)
			{
				c = tab[i] + 48;
				write(1, &c, 1);
			}
			write(1, "\n", 1);
			nbr++;
			i = -1;
			tab[9]++;
			ft_checktab2(tab, -1);
		}
	}
	return (nbr);
}

int		ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	nbr;
	int	i;

	nbr = 0;
	i = -1;
	while (++i < 10)
		tab[i] = i;
	nbr = ft_ten(tab, nbr, -1);
	return (nbr);
}
