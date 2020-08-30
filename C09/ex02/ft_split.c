/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 12:08:46 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/30 14:39:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_modifstrcmp(char *str, char *set, int i)
{
	while (set[++i] && str[i] && str[i] == set[i])
		;
	return (set[i] == '\0') ? i : 0;
}

int		ft_lines(char *str, char *set, int i)
{
	int	nbr;
	int	j;

	j = 0;
	nbr = 0;
	while (str[i] && (ft_modifstrcmp(str + i, set, -1) > 0))
		i += ft_modifstrcmp(str + i, set, -1);
	nbr = (str[i] == '\0') ? 0 : 1;
	while (str[i])
	{
		nbr = (j > 0) ? nbr + 1 : nbr;
		j = 0;
		while (str[i] && (ft_modifstrcmp(str + i, set, -1) > 0) && ++j != 0)
			i += ft_modifstrcmp(str + i, set, -1);
		i = (j == 0) ? i + 1 : i;
	}
	return (nbr);
}

char	*ft_malloc(char *str, char *set, int i)
{
	char	*tab;
	int		x;

	tab = NULL;
	x = 0;
	while (str[i] && (ft_modifstrcmp(str + i, set, -1) > 0))
		i += ft_modifstrcmp(str + i, set, -1);
	x = i;
	while (str[i] && (ft_modifstrcmp(str + i, set, -1) == 0))
		++i;
	if ((tab = malloc(sizeof(tab[0]) * ((i - x) + 1))) == NULL)
		return (NULL);
	return (tab);
}

int		ft_putintab(char *str, char *set, char *tab, int i)
{
	int	j;

	j = 0;
	while (str[i] && (ft_modifstrcmp(str + i, set, -1) > 0))
		i += ft_modifstrcmp(str + i, set, -1);
	while (str[i] && (ft_modifstrcmp(str + i, set, -1) == 0))
		tab[j++] = str[i++];
	tab[j] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbr_lines;
	int		i;
	int		x;

	x = -1;
	i = 0;
	tab = NULL;
	nbr_lines = ft_lines(str, charset, 0);
	if ((tab = malloc(sizeof(tab[0]) * (nbr_lines + 1))) == NULL)
		return (NULL);
	while (++x < nbr_lines && str[i])
	{
		if ((tab[x] = ft_malloc(str + i, charset, 0)) == NULL)
			return (NULL);
		i += ft_putintab(str + i, charset, tab[x], 0);
	}
	tab[nbr_lines] = 0;
	return (tab);
}
