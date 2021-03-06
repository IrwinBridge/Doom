/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:49:54 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 20:16:26 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

# include <stdbool.h>

char	*file_to_string(const char *filename);
int		next_line(char *str, int i);
int		go_to_block(char *str, char *block);
int		ini_count_vars(char *str);
char	*ini_next_name(char *str, bool fresh);
char	*ini_next_value(char *str, bool fresh);
int		next_char(char *str, int i, char c);
bool	is_numeric(char *str);
float	next_float(char *str, int *i);

#endif
