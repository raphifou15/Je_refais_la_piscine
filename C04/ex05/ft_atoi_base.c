/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:18:39 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/04 17:20:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base, int i, int j)
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

int	ft_tablette(char c, char *base, int i, int j)
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

int	ft_atoi_base2(char *str, char *base, int size, int i)
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

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int i;

	i = 0;
	size = -1;
	if (ft_check_base(base, -1, -1) == 0)
		return (0);
	while (base[++size])
		;
	return (ft_atoi_base2(str, base, size, 0));
}
