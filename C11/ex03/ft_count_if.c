/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:38:16 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/23 15:06:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int rec;

	rec = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]) != 0)
			rec += f(tab[i]);
	return (rec);
}
