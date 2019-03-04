/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 12:02:56 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 15:25:32 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

void	render_map(t_render *render, t_map_data *map, t_player *player)
{
	t_sector	*sector;
	t_fpoint	p1;
	t_fpoint	p2;
	int			v;

	sector = (t_sector *)vector_get(&(map->sectors), player->sector);
	v = 0;
	while (v < vector_size(&(sector->vertices)) - 1)
	{
		p1 = *(t_fpoint *)vector_get(&(sector->vertices), v);
		p2 = *(t_fpoint *)vector_get(&(sector->vertices), v + 1);
		p1.x = render->screen->w / 2 - p1.x;
		p1.y = render->screen->h / 2 - p1.y;
		p2.x = render->screen->w / 2 - p2.x;
		p2.y = render->screen->h / 2 - p2.y;
		put_pixel(render->screen, p1.x, p1.y, 0xFF0000);
		put_pixel(render->screen, p2.x, p2.y, 0xFF0000);
		v++;
	}
}
