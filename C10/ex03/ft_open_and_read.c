/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 18:01:28 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/12 16:33:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_open_and_read(char *str, t_list tab, int x)
{
	char	*str2;

	str2 = NULL;
	if ((str2 = ft_str_fd(str)) == NULL)
		return (tab);
	tab = ft_put_in_tab_and_display_fd_0(str2, tab, x);
	free(str2);
	return (tab);
}
