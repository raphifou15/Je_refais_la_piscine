/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:23:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/19 18:43:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_strcmp_void(void *a1, void *a2)
{
	char	*s1;
	char	*s2;
	int		i;

	i = -1;
	s1 = NULL;
	s2 = NULL;
	s1 = (char *)a1;
	s2 = (char *)a2;
	while (s1[++i] && s2[i] && s1[i] == s2[i])
		;
	return (s1[i] - s2[i]);
}
