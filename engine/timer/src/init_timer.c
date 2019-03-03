/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_timer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 15:56:45 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 15:57:24 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "timer.h"

void	init_timer(t_timer *timer)
{
	timer->framerate = 60;
	timer->tick = 1000 / timer->framerate;
	timer->next_step = SDL_GetTicks();
	timer->last_time = 0;
	timer->now = 0;
	timer->fps = 0;
}
