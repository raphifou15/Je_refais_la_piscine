/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:04:03 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/22 19:27:57 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	lenght;
	int	*tab;

	if (min >= max)
		return (0);
	lenght = (max - min);
	if ((tab = malloc(sizeof(lenght) * lenght)) == 0)
		return (0);
	lenght = -1;
	--min;
	while (++min < max && ++lenght != -1)
		tab[lenght] = min;
	return (tab);
}
