/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 21:53:45 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/04 22:11:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (++i < nb)
		res = (i == 1) ? i * (i + 1) : res * (i + 1);
	return (res);
}
