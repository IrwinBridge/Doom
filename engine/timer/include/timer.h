/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 14:09:29 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 15:57:37 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMER_H
# define TIMER_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

typedef struct	s_timer
{
	Sint32		framerate;
	Uint32		tick;
	Uint32		now;
    Uint32		next_step;
	Uint32		last_time;
	Sint32		fps;
}				t_timer;

void			init_timer(t_timer *timer);
void			show_fps(t_timer *timer);
void			update_ticks(t_timer *timer);
void			wait_for_frame(t_timer timer);

#endif
