/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:37:51 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 19:37:18 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_H
# define ENTITY_H

# include "types.h"
# include "events.h"

typedef struct	s_player
{
	t_position	pos;
	t_position	velocity;
	float		angle;
	float		pitch;
	float		anglesin;
	float		anglecos;
	unsigned	sector;
	float		eyes_height;
	float		couch_height;
}				t_player;

void			move_player(t_player *player, t_axis axis);
void			move_camera(t_player *player, t_mouse mouse);

#endif
