/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_player_from_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:07:20 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 14:21:23 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	read_player_from_map(t_player *player, t_vector *sectors, char *map)
{
	float	floor;
	int		i;

	if ((i = next_char(map, 0, 'p')) < 0)
		return ;
	player->pos.x = next_float(map, &i);
	player->pos.y = next_float(map, &i);
	player->angle = next_float(map, &i);
	player->pitch = 0;
	player->anglesin = sinf(player->angle);
	player->anglecos = cosf(player->angle);
	player->sector = (unsigned int)next_float(map, &i);
	floor = ((t_sector *)vector_get(sectors, player->sector))->floor;
	player->couch_height = 2.5f;
	player->eyes_height = 6.0f;
	player->pos.z = floor + player->eyes_height;
	printf("Read player from map\n");
}
