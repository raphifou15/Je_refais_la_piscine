/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 23:18:09 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/23 13:38:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	length;

	range = (min >= max) ? 0 : range;
	if (min >= max)
		return (0);
	length = max - min;
	if ((range[0] = malloc(sizeof(length) * length)) == 0)
		return (-1);
	--min;
	length = -1;
	while (++min < max && ++length != -1)
		range[0][length] = min;
	return (length + 1);
}
