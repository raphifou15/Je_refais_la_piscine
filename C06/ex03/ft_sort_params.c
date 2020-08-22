/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 17:23:00 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/22 15:29:25 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_param(char *argv, int i)
{
	while (argv[++i])
		write(1, &argv[i], 1);
	write(1, "\n", 1);
}

int		ft_sort(char *argv1, char *argv2, int i)
{
	while (argv1[i] == argv2[i] && argv1[i] && argv2[i])
		i++;
	return (argv1[i] < argv2[i]) ? 0 : 1;
}

void	ft_sort_params(int argc, char *argv[], int i)
{
	char	*str;

	str = NULL;
	while (++i < (argc - 1))
	{
		if (ft_sort(argv[i], argv[i + 1], 0) == 0)
		{
			str = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = str;
			i = 0;
		}
	}
	while (--argc > 0)
		ft_print_param(argv[argc], -1);
}

int		main(int argc, char *argv[])
{
	ft_sort_params(argc, argv, 0);
	return (0);
}
