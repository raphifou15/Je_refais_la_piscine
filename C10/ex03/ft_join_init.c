/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 22:37:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/06 23:09:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_join_init(char *str, char c)
{
	if ((str = malloc(sizeof(str[0] * 2))) == NULL)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
