/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fps.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 14:30:20 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 15:53:15 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "timer.h"

void	show_fps(t_timer *timer)
{
	timer->fps++;
	if (timer->now > timer->last_time + 1000)
	{
		printf("FPS: %d\n", timer->fps);
		timer->last_time = timer->now;
		timer->fps = 0;
	}
}

void	update_ticks(t_timer *timer)
{
	timer->now = SDL_GetTicks();
}

void	wait_for_frame(t_timer timer)
{
	SDL_Delay(timer.next_step - timer.now);
}
