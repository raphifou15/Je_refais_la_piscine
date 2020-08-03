/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 13:26:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/03 13:52:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (++j < (int)nb && src[j] && ++i != -1)
		dest[i - 1] = src[j];
	dest[i] = '\0';
	return (dest);
}
