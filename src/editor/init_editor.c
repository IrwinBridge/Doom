/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_editor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 12:54:35 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 17:18:16 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

void	init_editor(t_editor *editor)
{
	t_ipoint	point;

	// Grid system
	for (int x = 0; x < GSIZE; x++)
	{
		for (int y = 0; y < GSIZE; y++)
		{
			point.x = x;
			point.y = y;
			editor->grid.points[x][y] = point;
		}
	}
	editor->grid.line_offset = 35;
	editor->grid.offset.x = 0;
	editor->grid.offset.y = 0;
	editor->grid.scale = 1.0f;

	// Sectors and vertices init
	editor->sectors = malloc(sizeof(t_esector));
	editor->nsectors = 1;
	editor->sectors->npoints = 0;
}
