/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_events.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:37:56 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 17:08:52 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

// void	*create_event(t_evtype type, )
//
// void	*get_event_of_type(SDL_Event event, Uint32 type)
// {
// 	if (event.type == SDL_KEYDOWN)
// 		return (create_event(KEY_DOWN, event.key));
// }

void	process_events(t_engine *engine, t_game *game)
{
	SDL_Event	event;

	while (SDL_PollEvent(&event))
	{
		// enqueue(engine->queue, get_event_of_type(event));
		if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
			game->playing = false;
	}
}
