/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:26:46 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 20:20:26 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

# include "types.h"

typedef struct	s_mouse
{
	t_ipoint	pos;
	t_ipoint	rel;
}				t_mouse;

typedef struct	s_events
{
	t_axis		axis;
	t_mouse		mouse;
}				t_events;

void			init_mouse(t_events *events);
void			set_mouse_motion(t_events *events, SDL_MouseMotionEvent *motion);
void			init_keyboard_axis(t_events *events);
void			set_keyboard_axis(t_events *events, SDL_KeyboardEvent *key);

#endif
