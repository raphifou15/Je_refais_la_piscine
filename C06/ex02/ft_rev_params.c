/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 16:44:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/21 17:12:45 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_param(char *argv, int i)
{
	while (argv[++i])
		write(1, &argv[i], 1);
	write(1, "\n", 1);
}

void	ft_rev_params(int argc, char *argv[])
{
	while (--argc > 0)
		ft_print_param(argv[argc], -1);
}

int		main(int argc, char *argv[])
{
	ft_rev_params(argc, argv);
	return (0);
}
