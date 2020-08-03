/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 14:17:56 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/03 14:46:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = -1;
	i = -1;
	while (str[++i])
	{
		while (str[i] == to_find[++j] && ++i != 0)
			if (to_find[j + 1] == '\0')
				return (str + i - j - 1);
		i = (j > 0) ? i - j : i;
		j = -1;
	}
	return (NULL);
}
