/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 22:02:55 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/04 05:09:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int	n;

	n = 0;
	sign = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while ((*str == '-' || *str == '+') && (*str++))
		(*(str - 1) == '-') ? sign++ : sign;
	while (*str >= 48 && *str <= 57 && *str++)
	{
		n = (n == 0) ? n : n * 10;
		n += (*(str - 1) - 48);
	}
	n = (sign % 2 == 0) ? n : n * -1;
	return (n);
}
