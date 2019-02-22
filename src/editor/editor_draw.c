/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_draw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 12:04:47 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 18:45:58 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

void	hline(ENGINE *doom, t_ipoint p1, t_ipoint p2, Uint32 color)
{
	while (p1.x <= p2.x)
	{
		safe_put_pixel(doom, p1.x, p1.y, color);
		p1.x++;
	}
}

void	vline(ENGINE *doom, t_ipoint p1, t_ipoint p2, Uint32 color)
{
	while (p1.y <= p2.y)
	{
		safe_put_pixel(doom, p1.x, p1.y, color);
		p1.y++;
	}
}

bool	draw_grid_line(ENGINE *doom, t_ipoint p1, t_ipoint p2)
{
	Uint32	color =  0xABB2B9;

	if (is_line_outside(doom, p1, p2))
		return (false);
	if (p1.x == p2.x)
		vline(doom, p1, p2, color);
	else
		hline(doom, p1, p2, color);
	return (true);
}
