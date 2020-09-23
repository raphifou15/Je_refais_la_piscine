/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:12:37 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/23 22:11:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_bigtosmall(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	return (1);
}

int	ft_sort_smalltobig(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	if (length <= 1)
		return (1);
	while (++i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (ft_sort_bigtosmall(tab, length, f));
		if (f(tab[i], tab[i + 1]) < 0)
			return (ft_sort_smalltobig(tab, length, f));
	}
	return (1);
}
