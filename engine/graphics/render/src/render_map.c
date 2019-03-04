/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 12:02:56 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 22:17:19 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

void	test_render_player(t_render *render)
{
	put_pixel(render->screen, render->screen->w / 2, render->screen->h / 2, 0xFFFF00);
}

void	render_map(t_render *render, t_map_data *map, t_player *player)
{
	t_sector	*sector;

	t_fpoint	rel1;
	t_fpoint	rel2;

	float		rel_floor;
	float		rel_ceiling;

	t_fpoint	rot1;
	t_fpoint	rot2;

	t_fpoint	scal1;
	t_fpoint	scal2;

	t_fpoint	proj1;
	t_fpoint	proj2;

	float		proj1_floor;
	float		proj1_ceiling;
	float		proj2_floor;
	float		proj2_ceiling;

	int			v;
	int			x;

	sector = (t_sector *)vector_get(&(map->sectors), player->sector);
	v = 0;
	while (v < vector_size(&(sector->vertices)) - 1)
	{
		rel1 = *((t_fpoint *)vector_get(&(sector->vertices), v));
		rel2 = *((t_fpoint *)vector_get(&(sector->vertices), v + 1));
		rel_floor = sector->floor;
		rel_ceiling = sector->ceiling;

		// Relative to player
		rel1.x -= player->pos.x;
		rel1.y -= player->pos.y;
		rel2.x -= player->pos.x;
		rel2.y -= player->pos.y;

		rel_floor -= player->pos.z;
		rel_ceiling -= player->pos.z;

		// Rotate relative to player
		rot1.x = rel1.x * player->anglecos - rel1.y * player->anglesin;
		rot1.y = rel1.x * player->anglesin + rel1.y * player->anglecos;
		rot2.x = rel2.x * player->anglecos - rel2.y * player->anglesin;
		rot2.y = rel2.x * player->anglesin + rel2.y * player->anglecos;

		// Scale relative to screen
		float hfov = 0.66 * render->screen->h;
		float vfov = 0.2 * render->screen->h;
		scal1.x = hfov / rot1.y;
		scal1.y = vfov / rot1.y;
		scal2.x = hfov / rot2.y;
		scal2.y = vfov / rot2.y;

		// Screen-space transform for x
		proj1.x = render->screen->w / 2 - rot1.x * scal1.x;
		proj2.x = render->screen->w / 2 - rot2.x * scal2.x;

		// Screen-space transform for y
		proj1_floor = render->screen->h / 2 - rel_floor * scal1.y;
		proj1_ceiling = render->screen->h / 2 - rel_ceiling * scal1.y;
		proj2_floor = render->screen->h / 2 - rel_floor * scal2.y;
		proj2_ceiling = render->screen->h / 2 - rel_ceiling * scal2.y;

		// draw lines from proj1.x to proj2.x
		x = proj1.x;
		while (x < proj2.x)
		{
			Uint8 r = fclamp(20 * (v + 1), 0, 255);
			Uint8 g = fclamp(20 * (v + 1), 0, 255);
			Uint8 b = fclamp(20 * (v + 1), 0, 255);
			Uint32 color = SDL_MapRGBA(render->screen->format, r, g, b, 255);

			line(render->screen, x, proj1_ceiling, proj1_floor, color);
			x++;
		}

		// safe_put_pixel(render->screen, proj1.x, proj1.y, 0xFF0000);
		// safe_put_pixel(render->screen, proj2.x, proj2.y, 0xFF0000);

		v++;
	}

	test_render_player(render);
}
