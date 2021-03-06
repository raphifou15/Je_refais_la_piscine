/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:35:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/07/29 19:21:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	if (!(str))
		return (1);
	while (str[++i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
	}
	return (1);
}
