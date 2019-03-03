/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:28:40 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 16:09:50 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	process_game(t_engine *engine, t_game *game)
{
	while (game->playing)
	{
		update_ticks(&(engine->timer));
		if (engine->timer.next_step <= engine->timer.now)
		{
			while (engine->timer.next_step <= engine->timer.now)
			{
				process_events(engine, game);
				process_logic(engine, game);
				engine->timer.next_step += engine->timer.tick;
			}
			render_game(engine, game);
			// show_fps(&(engine->timer));
		}
		else
			wait_for_frame(engine->timer);
	}
}
