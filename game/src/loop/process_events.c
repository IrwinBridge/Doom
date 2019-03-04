/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_events.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:37:56 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 20:18:36 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	process_events(t_engine *engine, t_game *game)
{
	SDL_Event	event;

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_MOUSEMOTION)
			set_mouse_motion(&(engine->events), &event.motion);
		if (event.type == SDL_KEYDOWN || event.type == SDL_KEYUP)
			set_keyboard_axis(&(engine->events), &event.key);
		if (event.type == SDL_QUIT)
			game->playing = false;
	}
}
