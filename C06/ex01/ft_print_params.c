/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 22:51:56 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/20 23:13:11 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *argv, int i)
{
	while (argv[++i])
		write(1, &argv[i], 1);
	write(1, "\n", 1);
}

void	ft_print_params(int argc, char **argv, int i)
{
	while (++i < argc)
		ft_print(argv[i], -1);
}

int		amain(int argc, char *argv[])
{
	ft_print_params(argc, argv, 0);
	return (0);
}
