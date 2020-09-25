/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:45:33 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/25 18:51:08 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*str;

	str = NULL;
	i = -1;
	while (tab[++i + 1] != NULL)
	{
		if ((cmp(tab[i], tab[i + 1]) > 0))
		{
			str = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = str;
			i = -1;
		}
	}
}
