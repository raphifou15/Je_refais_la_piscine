/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 18:10:08 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/04 18:13:19 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = -1;
	while (str[++i] && str2[i] && str[i] == str2[i])
		;
	return (str[i] - str2[i]);
}
