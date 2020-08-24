/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 17:55:17 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/24 18:04:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_tab(char *str, int nbr, char *base_to, int size2)
{
	int	size;

	size = -1;
	while (base_to[++size])
		;
	if (nbr < size)
		str[size2] = base_to[nbr];
	else
		ft_put_tab(str, nbr / size, base_to, size2 - 1);
	str[size2] = (nbr < size) ? base_to[nbr] : base_to[nbr % size];
}

int		ft_nbr(int nbr, char *base_to, int size, int i)
{
	return (nbr < size) ? i : ft_nbr(nbr / size, base_to, size, i + 1);
	return (i);
}
