/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   points.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 17:04:01 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 18:47:05 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

bool	is_point_outside(ENGINE *doom, t_ipoint p)
{
	if (p.x < 0 || p.y < 0 || p.x > WINDOW_WIDTH - 1 || p.y > WINDOW_HEIGHT - 1)
		return (true);
	return (false);
}

void	draw_point(ENGINE *doom, t_ipoint point)
{
	int			size;
	t_ipoint	p1;
	t_ipoint	p2;

	size = 10;
	if (is_point_outside(doom, point))
		return ;
	safe_put_pixel(doom, point.x, point.y, 0x00FF00);
	p1.x = point.x - size * 0.5f;
	p1.y = point.y - size * 0.5f;
	p2.x = point.x - size * 0.5f;
	p2.y = point.y - size * 0.5f;
	for (int i = 0; i < size; i++)
	{
		safe_put_pixel(doom, p1.x, p1.y, 0x00FF00);
		safe_put_pixel(doom, p1.x, p1.y + size, 0x00FF00);
		p1.x++;
		safe_put_pixel(doom, p2.x, p2.y, 0x00FF00);
		safe_put_pixel(doom, p2.x + size, p2.y, 0x00FF00);
		p2.y++;
	}
}
