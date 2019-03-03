/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 13:13:38 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 14:01:35 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "events.h"

void	init_mouse(t_events *events)
{
	events->mouse.pos.x = 0;
	events->mouse.pos.y = 0;
	events->mouse.rel.x = 0;
	events->mouse.rel.y = 0;
}

void	set_mouse_motion(t_events *events, SDL_MouseMotionEvent motion)
{
	events->mouse.pos.x = motion.x;
	events->mouse.pos.y = motion.y;
	events->mouse.rel.x = motion.xrel;
	events->mouse.rel.y = motion.yrel;
}
