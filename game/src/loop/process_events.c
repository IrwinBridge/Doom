/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_events.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:37:56 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 21:08:43 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	process_events(t_engine *engine, t_game *game)
{
	SDL_Event	event;
	while (SDL_PollEvent(&event))
	{
		if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
			game->playing = false;
	}
}
