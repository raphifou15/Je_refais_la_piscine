/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 17:51:38 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/12 21:53:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	**ft_init_strs(char **raphael)
{
	raphael = NULL;
	if ((raphael = malloc(sizeof(*raphael) * (4 + 1))) == NULL)
		return (NULL);
	raphael[0] = ft_strcpy("raphael", raphael[0]);
	raphael[1] = ft_strcpy("raphael", raphael[1]);
	raphael[2] = ft_strcpy("raph", raphael[2]);
	raphael[3] = ft_strcpy("raphael", raphael[3]);
	raphael[4] = NULL;
	return (raphael);
}

int		main(int argc, char *argv[])
{
	t_list	*list;
	char	**raphael;
	int		i;

	raphael = NULL;
	i = -1;
	(void)argc;
	(void)argv;
	raphael = ft_init_strs(raphael);
	list = NULL;
	list = ft_list_push_strs(4, raphael);
	ft_list_remove_if(&list, "raphael", ft_strcmp, ft_free);
	if (list != NULL)
	{
		ft_list_write(list, ft_putstr);
		ft_list_clear(list, ft_free);
	}
	while (raphael[++i] != NULL)
	{
		free(raphael[i]);
		raphael[i] = NULL;
	}
	free(raphael);
	raphael = NULL;
	return (0);
}
