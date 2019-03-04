/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 17:52:50 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 15:12:48 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_H
# define RENDER_H

# include "drawer.h"
# include "queue.h"
# include "map.h"

typedef struct	s_render
{
	SDL_Surface	*screen;
	t_queue		*portals;
	t_map_data	*map;
}				t_render;

void			init_render(t_render *render, t_map_data *map, SDL_Surface *screen);
void			render_map(t_render *render, t_map_data *map, t_player *player);

#endif
