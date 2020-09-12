/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 21:35:23 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 23:43:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_join(char *str, char c)
{
	char			*str2;
	unsigned long	i;

	str2 = NULL;
	i = 0;
	if (str == NULL)
		return (ft_join_init(str2, c));
	while (str[i])
		i++;
	if ((str2 = malloc(sizeof(str2[0]) * (i + 2))) == NULL)
		return (ft_free(str));
	i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = c;
	str2[++i] = '\0';
	free(str);
	str = NULL;
	return (str2);
}
