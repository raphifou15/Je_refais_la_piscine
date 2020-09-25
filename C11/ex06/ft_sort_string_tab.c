/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:52:04 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/25 18:35:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = -1;
	while (str1[++i] && str2[i] && str1[i] == str2[i])
		;
	return (str1[i] - str2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*str;
	int		(*ptr)(char *, char *);

	str = NULL;
	i = -1;
	ptr = ft_strcmp;
	while (tab[++i + 1] != NULL)
	{
		if ((ptr(tab[i], tab[i + 1]) > 0))
		{
			str = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = str;
			i = -1;
		}
	}
}
