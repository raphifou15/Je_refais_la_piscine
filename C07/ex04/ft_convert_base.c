/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:47:21 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/24 18:14:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_put_tab(char *str, int nbr, char *base_to, int size2);
int		ft_nbr(int nbr, char *base_to, int size, int i);

char	*ft_put_tab_base(char *str, long nbr, char *base_to, int size)
{
	int		size2;
	long	n;

	n = nbr;
	size2 = 0;
	while (base_to[++size])
		;
	(nbr < 0) ? size2++ : nbr;
	nbr = (nbr < 0) ? nbr * -1 : nbr;
	size2 += ft_nbr((int)nbr, base_to, size, 1);
	if ((str = malloc(sizeof(str[0]) * (size2 + 1))) == NULL)
		return (NULL);
	str[0] = (n < 0) ? '-' : str[0];
	ft_put_tab(str, (int)nbr, base_to, size2 - 1);
	str[size2] = '\0';
	return (str);
}

int		ft_check_base(char *base, int i, int j)
{
	if (base == NULL)
		return (0);
	while (base[++i])
		if (base[i] == 32 || base[i] == '-' || base[i] == '+'
		|| (base[i] > 8 && base[i] < 14))
			return (0);
	if (i < 2)
		return (0);
	i = -1;
	while (base[++i])
	{
		while (base[++j + i + 1])
			if (base[i] == base[j + i + 1])
				return (0);
		j = -1;
	}
	return (1);
}

int		ft_tablette(char c, char *base, int i, int j)
{
	if (i == -1)
	{
		while (*(base))
			if (c == *(base++))
				return (1);
	}
	if (i == -1)
		return (0);
	while (base[++j])
		if (c == base[j])
			return (j);
	return (0);
}

int		ft_atoi_base(char *str, char *base, int size, int i)
{
	int	sign;
	int	n;

	n = 0;
	sign = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while ((str[i] == '-' || str[i] == '+') && ++i != -1)
		(str[i - 1] == '-') ? sign++ : sign;
	while (str[i] && ft_tablette(str[i], base, -1, -1) == 1 && ++i != -1)
	{
		n = (n == 0) ? n : n * size;
		n += ft_tablette(str[i - 1], base, 0, -1);
	}
	n = (sign % 2 == 0) ? n : n * -1;
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size;
	int		new_nbr;
	char	*str;

	str = NULL;
	size = -1;
	if (ft_check_base(base_from, -1, -1) == 0)
		return (NULL);
	if (ft_check_base(base_to, -1, -1) == 0)
		return (NULL);
	while (base_from[++size])
		;
	new_nbr = ft_atoi_base(nbr, base_from, size, 0);
	str = ft_put_tab_base(str, (long)new_nbr, base_to, -1);
	return (str);
}
