/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 13:42:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/23 15:47:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_join(char *str, char **strs, char *sep, int size)
{
	int i;
	int j;
	int z;

	z = -1;
	i = 0;
	j = -1;
	while (++i < size)
	{
		while (strs[i][++j] && ++z != -1)
			str[z] = strs[i][j];
		j = -1;
		if (size > 2 && i + 1 < size)
		{
			while (sep[++j] && ++z != -1)
				str[z] = sep[j];
			j = -1;
		}
	}
	str[++z] = '\0';
}

int		ft_size_all(int size, char **strs, char *sep, int i)
{
	int	j;
	int length;

	length = 0;
	j = -1;
	while (++i < size)
	{
		while (strs[i][++j])
			;
		length += j;
		j = -1;
		if (size > 2 && i + 1 < size)
		{
			while (sep[++j])
				;
			length += j;
			j = -1;
		}
	}
	return (length);
}

char	*ft_empty_string(void)
{
	char	*string;

	string = NULL;
	if ((string = malloc(sizeof(string[0]))) == NULL)
		return (NULL);
	string[0] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		size_string;

	str = NULL;
	if (size == 0)
		return (ft_empty_string());
	size_string = ft_size_all(size + 1, strs, sep, 0);
	if ((str = malloc(sizeof(str[0]) * (size_string + 1))) == NULL)
		return (NULL);
	ft_join(str, strs, sep, size + 1);
	return (str);
}
