/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 18:51:44 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/20 19:35:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tab(int *tab, int i, int x, int z)
{
	if (x == 0)
	{
		++i;
		tab[i] = i;
		(i < 9) ? ft_tab(tab, i, 0, 0) : i;
	}
	if (x == 1)
	{
		++i;
		tab[i] = tab[i] + 48;
		write(1, &tab[i], 1);
		tab[i] = tab[i] - 48;
		(i < 9) ? ft_tab(tab, i, 1, 0) : i;
	}
	if (x == 3)
	{
		i++;
		if (i != 0 && tab[i] >= 10)
		{
			z = 1;
			tab[i - 1]++;
		}
		tab[i] = (z == 1) ? 0 : tab[i];
		(i < 9) ? ft_tab(tab, i, 3, z) : i;
	}
}

int		ft_checktab_bis(int *tab, int i, int j)
{
	--j;
	if (j > i)
	{
		if ((tab[j] == (tab[i] - (j - i)))
			|| (tab[j] == (tab[i] + (j - i))) || tab[j] == tab[i])
		{
			tab[j]++;
			ft_tab(tab, -1, 3, 0);
			return (0);
		}
	}
	return (j > i) ? ft_checktab_bis(tab, i, j) : 1;
}

int		ft_checktab(int *tab, int i)
{
	int c;

	++i;
	c = ft_checktab_bis(tab, i, 10);
	if (c == 0)
		ft_checktab(tab, -1);
	return (i < 9) ? ft_checktab(tab, i) : 1;
}

int		ft_ten(int *tab, int nbr, int i)
{
	ft_checktab(tab, -1);
	if (tab[0] < 10)
	{
		ft_tab(tab, -1, 1, 0);
		write(1, "\n", 1);
		nbr++;
		i = -1;
		tab[9]++;
		ft_tab(tab, -1, 3, 0);
	}
	return (nbr < 724 && tab[0] < 10) ? ft_ten(tab, nbr, -1) : nbr;
}

int		ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	nbr;
	int	i;

	nbr = 0;
	i = -1;
	ft_tab(tab, i, 0, 0);
	nbr += ft_ten(tab, nbr, i);
	return (nbr);
}
