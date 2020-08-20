/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 22:31:54 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/20 22:45:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str, int i)
{
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	ft_print(argv[0], -1);
	write(1, "\n", 1);
	return (0);
}
