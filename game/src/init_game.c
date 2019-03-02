/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:31:15 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:30:12 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_game(t_engine *engine, t_game *game)
{
	if (!create_window(&(engine->window), "doom-nukem", 1280, 720))
		printf("Window cannot be created\n");
	engine->events = create_queue();
	game->playing = true;
}
