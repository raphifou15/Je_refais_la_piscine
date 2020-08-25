/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 15:10:08 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/25 21:37:57 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(char *str, char *charset, int i)
{
	while (charset[++i])
		if (charset[i] != str[i])
			return (0);
	return (i);
}

int		ft_line(char *str, char *charset, int i, int j)
{
	int	nbr;

	nbr = 0;
	while (str[i] == charset[0] && (ft_strncmp(str + i, charset, -1) > 0))
		i += ft_strncmp(str + i, charset, -1);
	nbr = (str[i] != '\0') ? nbr + 1 : nbr;
	while (str[i])
	{
		while (str[i] == charset[0] &&
		(ft_strncmp(str + i, charset, -1) > 0) && ++j != 0)
			i += ft_strncmp(str + i, charset, -1);
		(j > 0 && str[i] != '\0') ? nbr++ : 0;
		j = 0;
		i = (str[i] == '\0') ? i : i + 1;
	}
	return (nbr);
}

char	*ft_put_malloc(char *str, char *charset, char *tab, int i)
{
	int	k;
	int	x;

	x = 0;
	while (str[i] == charset[0] && (ft_strncmp(str + i, charset, -1) > 0))
		i += ft_strncmp(str + i, charset, -1);
	k = i;
	while (str[i] && x == 0)
	{
		if (str[i] == charset[0] && (ft_strncmp(str + i, charset, -1) > 0))
			x = 1;
		(x == 0) ? i++ : 0;
	}
	if ((tab = malloc(sizeof(charset[0]) * ((i - k) + 1))) == NULL)
		return (NULL);
	return (tab);
}

int		ft_put_in_tab(char *str, char *charset, char *tab, int i)
{
	int	k;
	int	x;

	x = 0;
	k = -1;
	while (str[i] == charset[0] && (ft_strncmp(str + i, charset, -1) > 0))
		i += ft_strncmp(str + i, charset, -1);
	while (str[i] && x == 0)
	{
		if (str[i] == charset[0] && (ft_strncmp(str + i, charset, -1) > 0))
			x = 1;
		if (x == 0)
			tab[++k] = str[i];
		(x == 0) ? i++ : 0;
	}
	tab[++k] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nbr_line;
	int		i;
	int		j;

	j = -1;
	tab = NULL;
	i = 0;
	nbr_line = ft_line(str, charset, 0, 0);
	if ((tab = malloc(sizeof(tab[0]) * (nbr_line + 1))) == NULL)
		return (NULL);
	while (++j < nbr_line)
	{
		if ((tab[j] = ft_put_malloc(str + i, charset, tab[j], 0)) == NULL)
			return (NULL);
		i += ft_put_in_tab(str + i, charset, tab[j], 0);
	}
	tab[nbr_line] = 0;
	return (tab);
}
