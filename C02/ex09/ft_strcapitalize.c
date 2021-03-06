/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:24:22 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/30 15:30:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (i == -1 && str[++i])
		str[i] = (str[i] > 96 && str[i] < 123) ? str[i] - 32 : str[i];
	while (str[++i])
		str[i] = ((str[i] > 96 && str[i] < 123) &&
		(!((str[i - 1] > 96 && str[i - 1] < 123) ||
		(str[i - 1] > 64 && str[i - 1] < 91)))) ? str[i] - 32 : str[i];
	return (str);
}
