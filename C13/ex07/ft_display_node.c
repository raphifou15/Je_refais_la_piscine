/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:20:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/22 15:14:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_display_node(void *item, int curent_level, int is_first)
{
	char	*str;
	int		i;

	str = NULL;
	str = (char *)item;
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "  ", 2);
	ft_putnbr(curent_level);
	write(1, "  ", 2);
	ft_putnbr(is_first);
	write(1, "\n", 1);
}
