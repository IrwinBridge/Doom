/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_logic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:38:55 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 19:34:06 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	process_logic(t_engine *engine, t_game *game)
{
	move_camera(engine->player, engine->events.mouse);
	move_player(engine->player, engine->events.axis);
	// move_foes(engine, game);
}
