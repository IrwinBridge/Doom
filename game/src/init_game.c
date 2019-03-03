/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:31:15 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:36:18 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_game(t_engine *engine, t_game *game)
{
	if (!create_window(&(engine->window), "doom-nukem", 1280, 720))
		printf("Window cannot be created\n");
	init_audio();
	init_timer(&(engine->timer));
	init_keyboard_axis(&(engine->events));
	init_mouse(&(engine->events));
	init_manager(&(engine->manager));
	load_scene(&(engine->manager), "level1");
	game->playing = true;
}
