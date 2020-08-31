/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:27:16 by rkhelif           #+#    #+#             */
/*   Updated: 2020/08/31 13:56:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_checkargc(int i);
void	ft_putstr(char *str);
void	ft_open_and_readfile(char *str);

#endif
