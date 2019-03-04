/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:39:23 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 14:15:22 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	render_game(t_engine *engine, t_game *game)
{
	SDL_FillRect(engine->window.screen, NULL, 0);
	render_map(&(engine->render), engine->render.map, engine->player);
	// render_sprites();
	update_window(&(engine->window));
}
