/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:31:15 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 19:17:58 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_game(t_engine *engine, t_game *game)
{
	t_map_data	*map;

	if (!create_window(&(engine->window), "doom-nukem", 1280, 720))
		printf("Window cannot be created\n");
	init_audio();
	init_manager(&(engine->manager));
	init_timer(&(engine->timer));
	init_keyboard_axis(&(engine->events));
	init_mouse(&(engine->events));
	load_scene(&(engine->manager), "level1");
	map = ((t_map *)get_map(&(engine->manager.scene), "level_map"))->data;
	init_render(&(engine->render), map, engine->window.screen);
	engine->player = &(map->player);
	game->playing = true;
}
