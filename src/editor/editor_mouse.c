/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_mouse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:26:49 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 18:15:02 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

void	init_vertices(t_esector	*sector)
{
	sector->vertices = malloc(sizeof(t_ipoint));
	sector->npoints = 1;
}

void	increase_vertices(t_esector	*sector)
{
	t_ipoint	*vertices;
	int			size;

	vertices = sector->vertices;
	size = sizeof(t_ipoint) * (sector->npoints + 1);
	sector->vertices = realloc(vertices, size);
	sector->npoints++;
}

bool	is_closing(t_esector *sector, t_ipoint point)
{
	if (point.x == sector->vertices[0].x
		&& point.y == sector->vertices[0].y)
		return (true);
	return (false);
}

bool	not_convex(t_esector *sector, t_ipoint point)
{
	for (int i = 0; i < sector->npoints; i++)
	{
		if (sector->npoints > 1 && i != 0)
		{
			if (point.x == sector->vertices[i].x && point.y == sector->vertices[i].y)
				return (true);
		}
	}
	return (false);
}

void	increase_sectors(t_editor *editor)
{
	t_esector	*sectors;
	int			size;

	sectors = editor->sectors;
	size = sizeof(t_esector) * (editor->nsectors + 1);
	editor->sectors = realloc(sectors, size);
	editor->nsectors++;
	editor->sectors[editor->nsectors - 1].npoints = 0;
}

void	place_vertex(ENGINE *doom, t_editor *editor)
{
	t_esector	*sector;
	t_ipoint	mouse;

	SDL_GetMouseState(&mouse.x, &mouse.y);
	mouse.x = iround(mouse.x - editor->grid.offset.x, editor->grid.line_offset);
	mouse.y = iround(mouse.y - editor->grid.offset.y, editor->grid.line_offset);
	sector = &(editor->sectors[editor->nsectors - 1]);
	if (mouse.x >= 0 && mouse.y >= 0)
	{
		if (sector->npoints == 0)
			init_vertices(sector);
		else
		{
			if (is_closing(sector, mouse) && sector->npoints < 3)
			{
				printf("To close sector place at least 3 points in different places\n");
				return ;
			}
			if (not_convex(sector, mouse))
			{
				printf("You can't place the point here\n");
				return ;
			}
			increase_vertices(sector);
		}
		sector->vertices[sector->npoints - 1] = mouse;

		// Sector increasing
		if (is_closing(sector, mouse) && sector->npoints > 3)
		{
			increase_sectors(editor);
			printf("Now it's a convex sector\n");
		}
	}
}
