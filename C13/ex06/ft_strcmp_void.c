/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:26:33 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/20 15:31:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_strcmp_void(void *a1, void *a2)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = NULL;
	s2 = NULL;
	i = -1;
	s1 = (char *)a1;
	s2 = (char *)a2;
	while (s1[++i] && s2[i] && s1[i] == s2[i])
		;
	return (s1[i] - s2[i]);
}
