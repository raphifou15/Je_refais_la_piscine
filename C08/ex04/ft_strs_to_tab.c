/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 13:39:30 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/27 18:08:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strs_to_tab.h"

int					ft_strlen(char *str, int i)
{
	while (str[++i])
		;
	return (i);
}

char				*ft_strdup(char *str, int size, int i)
{
	char	*tab;

	tab = NULL;
	if ((tab = malloc(sizeof(tab[0]) * (size + 1))) == NULL)
		return (NULL);
	while (str[++i])
		tab[i] = str[i];
	tab[i] = '\0';
	return (tab);
}

struct s_stock_str	*ft_free(t_stock_str *tab, int i, int x)
{
	(x > 0) ? free(tab[i].str) : 0;
	if (x > 0)
		tab[i].str = NULL;
	while (--i > -1)
	{
		free(tab[i].str);
		tab[i].str = NULL;
		free(tab[i].copy);
		tab[i].copy = NULL;
	}
	free(tab);
	tab = NULL;
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	tab = NULL;
	if ((tab = malloc(sizeof(*tab) * (ac + 1))) == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i], -1);
		if ((tab[i].str = ft_strdup(av[i], tab[i].size, -1)) == NULL)
			return (ft_free(tab, i, 0));
		if ((tab[i].copy = ft_strdup(av[i], tab[i].size, -1)) == NULL)
			return (ft_free(tab, i, 1));
	}
	tab[i].str = NULL;
	return (tab);
}
