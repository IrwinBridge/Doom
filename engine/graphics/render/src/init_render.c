/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:08:02 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 15:12:25 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"

void	init_render(t_render *render, t_map_data *map, SDL_Surface *screen)
{
	render->screen = screen;
	render->map = map;
}
