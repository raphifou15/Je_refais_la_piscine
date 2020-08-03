/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:32:50 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/03 16:47:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_return;
	int				i;
	int				j;

	i = -1;
	j = -1;
	size_return = (size < ft_strlen(dest))
				? ft_strlen(src) + size : ft_strlen(dest) + ft_strlen(src);
	while (dest[++i])
		;
	while (++i != -1 && ++j != -1 && (i < (int)size) && src[j])
		dest[i - 1] = src[j];
	dest[i] = '\0';
	return (size_return);
}
