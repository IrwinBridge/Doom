/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   windows.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:57:52 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:23:17 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
# define WINDOW_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

# include "stdbool.h"

typedef struct	s_window
{
	SDL_Window	*window;
	SDL_Surface	*screen;
}				t_window;

bool	create_window(t_window *window, const char *title, int w, int h);
void	update_window(t_window *window);
void	destroy_window(t_window *window);

#endif
