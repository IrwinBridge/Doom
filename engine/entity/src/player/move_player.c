/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 18:15:38 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 19:03:21 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "entity.h"

void	move_player(t_player *player, t_axis axis)
{
	// Apply axis to velocity
	player->velocity.x = axis.horizontal;
	player->velocity.y = -axis.vertical;

	// Apply velocity to position
	player->pos.x -= player->velocity.x;
	player->pos.y -= player->velocity.y;
}
