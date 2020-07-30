/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 15:42:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/30 16:21:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	j = -1;
	i = 0;
	while (src[i])
		i++;
	if (size <= 0)
		return (i);
	while (src[++j] && (unsigned int)j + 1 < size)
		dest[j] = src[j];
	dest[j] = '\0';
	return (i);
}
