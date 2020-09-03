/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 18:16:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/09/03 11:52:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_error(int n, char *str, int x)
{
	(n == 1) ? ft_putstr("ft_tail: la fonction open a renvoyé -1: '") : 0;
	(n == 1) ? ft_putstr(str) : 0;
	(n == 1) ? ft_putstr("' n'est pas un ficher\n") : 0;
	(n == 2) ? ft_putstr("ft_tail: la fonction read a ranvoyé -1 '") : 0;
	(n == 2) ? ft_putstr(str) : 0;
	(n == 2) ? ft_putstr("' erreur de lecture\n") : 0;
	(n == 3) ? ft_putstr("ft_tail: la fonction close a renvoyé -1 '") : 0;
	(n == 3) ? ft_putstr(str) : 0;
	(n == 3) ? ft_putstr("' impossible de fermer\n") : 0;
	(n == 4) ? ft_putstr("tail: l'option requiert un argument -- c\nSaisi") : 0;
	(n == 4) ? ft_putstr("issez « tail --help » pour plus d'informations.") : 0;
	(n == 4) ? ft_putstr("\n") : 0;
	return (x);
}
