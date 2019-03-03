/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_player_from_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:07:20 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 21:28:21 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	read_player_from_map(t_player *player, char *map)
{
	player->pos.x = 0;
	player->pos.y = 0;
	player->pos.z = 0;
	player->angle = 0;
	player->pitch = 0;
	player->anglesin = sinf(0);
	player->anglecos = cosf(0);
	player->sector = 0;
	printf("Read player from map\n");
}
