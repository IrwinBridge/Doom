/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 13:16:11 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 16:05:26 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "events.h"

void	init_keyboard_axis(t_events *events)
{
	events->axis.horizontal = 0;
	events->axis.vertical = 0;
}

void	set_keyboard_axis(t_events *events, SDL_KeyboardEvent key)
{
	if (key.keysym.sym == SDLK_a || key.keysym.sym == SDLK_LEFT)
		events->axis.horizontal = (key.state == SDL_PRESSED) ? -1 : 0;
	else if (key.keysym.sym == SDLK_d || key.keysym.sym == SDLK_RIGHT)
		events->axis.horizontal = (key.state == SDL_PRESSED) ? 1 : 0;
	if (key.keysym.sym == SDLK_w || key.keysym.sym == SDLK_UP)
		events->axis.vertical = (key.state == SDL_PRESSED) ? 1 : 0;
	else if (key.keysym.sym == SDLK_s || key.keysym.sym == SDLK_DOWN)
		events->axis.vertical = (key.state == SDL_PRESSED) ? -1 : 0;
}
