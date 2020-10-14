/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_put_strs2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 17:24:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/10/14 23:08:07 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_scanf(char *str)
{
	char	c;

	scanf("%99s%*[^\n]", str);
	while ((c = getchar()) != '\n')
		;
	printf("c = %c\n", c);
	return (str);
}

t_list	*ft_list_put_strs2(void)
{
	t_list	*list;
	char	str[100];
	char	str2[100];
	int		i;

	i = 0;
	list = NULL;
	ft_scanf(str);
	ft_strcat(str2, str);
	ft_list_push_back(&list, (void *)str);
	printf("list->data = %s\n", list->data);
	ft_list_push_back(&list, "et");
	ft_list_push_back(&list, "laura");
	return (list);
}
