/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 15:11:05 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 18:46:25 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

bool	is_line_outside(ENGINE *doom, t_ipoint p1, t_ipoint p2)
{
	if ((p1.x < 0 && p2.x < 0) || (p1.y < 0 && p2.y < 0))
		return (true);
	if ((p1.x > WINDOW_WIDTH - 1 && p2.x > WINDOW_WIDTH - 1)
		|| (p1.y > WINDOW_HEIGHT - 1 && p2.y > WINDOW_HEIGHT - 1))
		return (true);
	return (false);
}

void	rasterize(ENGINE *doom, t_line *line, t_point *p1, t_point *p2)
{
	while (1)
	{
		safe_put_pixel(doom, p1->x, p1->y, 0xFF0000);
		if (p1->x == p2->x && p1->y == p2->y)
			break ;
		line->err2 = 2 * line->err;
		if (line->err2 >= line->dy)
		{
			line->err += line->dy;
			p1->x += line->dirx;
		}
		if (line->err2 <= line->dx)
		{
			line->err += line->dx;
			p1->y += line->diry;
		}
	}
}

void	draw_edge(ENGINE *doom, t_ipoint start, t_ipoint end)
{
	t_line line;
	t_point	p1;
	t_point	p2;

	if (is_line_outside(doom, start, end))
		return ;
	p1.x = start.x;
	p1.y = start.y;
	p2.x = end.x;
	p2.y = end.y;
	line.start = p1;
	line.end = p2;
	line.dx = fabsf(p2.x - p1.x);
	line.dy = -fabsf(p2.y - p1.y);
	line.dirx = p1.x < p2.x ? 1 : -1;
	line.diry = p1.y < p2.y ? 1 : -1;
	line.err = line.dx + line.dy;
	rasterize(doom, &line, &p1, &p2);
}
