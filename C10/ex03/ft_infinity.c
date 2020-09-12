/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_infinity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 23:03:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/10 22:53:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

t_list	ft_infinity(t_list tab, int x)
{
	char	*str;

	str = NULL;
	str = ft_str_fd_0();
	tab = ft_put_in_tab_and_display_fd_0(str, tab, x);
	free(str);
	return (tab);
}
