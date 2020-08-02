/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:39:24 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/02 20:31:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	(c < 32) ? write(1, ".", 1) : write(1, &c, 1);
}

void	ft_print_addr(long c, char *tab)
{
	(c < 16) ? ft_putchar(tab[c]) : ft_print_addr(c / 16, tab);
	(c > 15) ? ft_putchar(tab[c % 16]) : c;
}

void	ft_putstr_hexa(char *new, char *tab, int i)
{
	while (++i < 16 && new[i] != '\0')
	{
		(new[i] < 16) ? write(1, "0", 1) : i;
		ft_print_addr((long)new[i], tab);
		(i % 2 == 1) ? write(1, " ", 1) : i;
	}
	(new[i] == '\0' && i % 2 == 1) ? write(1, " ", 1) : i;
	while (i++ < 16)
		write(1, " ", 1);
}

void	ft_print_memory2(char *new, char *tab, int i)
{
	ft_print_addr((long)new, tab);
	write(1, ": ", 2);
	ft_putstr_hexa(new, tab, -1);
	while (++i < 16 && new[i] != '\0')
		ft_putchar(new[i]);
	write(1, "\n", 1);
	(new[i] == '\0') ? new : ft_print_memory2(new + i, tab, -1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	tab[16];
	char	*new;

	new = (char *)addr;
	i = -1;
	while (++i < 16)
		tab[i] = (i < 10) ? i + 48 : i + 87;
	(size != 0) ? ft_print_memory2(new, tab, -1) : i;
	return (addr);
}
