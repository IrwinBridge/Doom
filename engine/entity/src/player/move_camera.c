/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_camera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:34:33 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 20:21:01 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "entity.h"

void	move_camera(t_player *player, t_mouse mouse)
{
	float	sensitivity;

	sensitivity = 0.003f;
	SDL_GetRelativeMouseState(&(mouse.rel.x), &(mouse.rel.y));
	player->angle -= mouse.rel.x * sensitivity;
	player->anglesin = sinf(player->angle);
	player->anglecos = cosf(player->angle);
}
