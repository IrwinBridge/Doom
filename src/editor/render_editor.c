/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_editor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:52:53 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 17:11:06 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

void	set_point(t_editor *editor, t_ipoint *p, t_ipoint grid_point)
{
	p->x = grid_point.x * editor->grid.line_offset + editor->grid.offset.x;
	p->y = grid_point.y * editor->grid.line_offset + editor->grid.offset.y;
}

void	render_grid(ENGINE *doom, t_editor *editor)
{
	float		line_offset;
	t_ipoint	p1;
	t_ipoint	p2;
	int			i;
	int			j;

	editor->grid.line_offset = (int)(35 * editor->grid.scale);
	i = 0;
	while (i < GSIZE)
	{
		j = 0;
		while (j < GSIZE)
		{
			if (j + 1 < GSIZE)
			{
				set_point(editor, &p1, editor->grid.points[i][j]);
				set_point(editor, &p2, editor->grid.points[i][j + 1]);
				draw_grid_line(doom, p1, p2);
			}
			if (i + 1 < GSIZE)
			{
				set_point(editor, &p1, editor->grid.points[i][j]);
				set_point(editor, &p2, editor->grid.points[i + 1][j]);
				draw_grid_line(doom, p1, p2);
			}
			j++;
		}
		i++;
	}
}

void	render_points(ENGINE *doom, t_editor *editor)
{
	t_ipoint	*vertex;
	t_ipoint	point;

	for (int i = 0; i < editor->nsectors; i++)
	{
		for (int j = 0; j < editor->sectors[i].npoints; j++)
		{
			vertex = &(editor->sectors[i].vertices[j]);
			if (vertex->x >= 0 && vertex->y >= 0)
			{
				set_point(editor, &point, *vertex);
				draw_point(doom, point);
			}
		}
	}
}

void	render_sectors(ENGINE *doom, t_editor *editor)
{
	t_ipoint	*vertex1;
	t_ipoint	*vertex2;
	t_ipoint	p1;
	t_ipoint	p2;

	for (int i = 0; i < editor->nsectors; i++)
	{
		for (int j = 0; j < editor->sectors[i].npoints; j++)
		{
			if (j + 1 < editor->sectors[i].npoints)
			{
				vertex1 = &(editor->sectors[i].vertices[j]);
				vertex2 = &(editor->sectors[i].vertices[j + 1]);
				if (vertex1->x >= 0 && vertex1->y >= 0
					&& vertex2->x >= 0 && vertex2->y >= 0)
				{
					set_point(editor, &p1, *vertex1);
					set_point(editor, &p2, *vertex2);
					draw_edge(doom, p1, p2);
				}
			}
		}
	}
}

void	render_editor(ENGINE *doom, t_editor *editor)
{
	clear_screen(doom, 0x17202A);
	//printf("SCREEN CLEARED\n");
	render_grid(doom, editor);
	//printf("GRID FILLED\n");
	render_sectors(doom, editor);
	//printf("LINES RENDERED\n");
	render_points(doom, editor);
	//printf("POINTS RENDERED\n");
	update_screen(doom);
}
