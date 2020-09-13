/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 23:10:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/13 23:40:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*map;
	int	i;

	i = -1;
	map = NULL;
	if ((map = malloc(sizeof(map) * length)) == NULL)
		return (NULL);
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
