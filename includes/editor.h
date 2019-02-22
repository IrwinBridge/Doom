/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:36:23 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 18:02:34 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDITOR_H
# define EDITOR_H

# define GSIZE	100

typedef struct	s_line
{
	t_point		start;
	t_point		end;
	int			dx;
	int			dy;
	int			dirx;
	int			diry;
	int			err;
	int			err2;
}				t_line;

typedef struct	s_ipoint
{
	int			x;
	int			y;
}				t_ipoint;

typedef struct	s_grid
{
	t_ipoint	points[GSIZE][GSIZE];
	int			line_offset;
	t_ipoint	offset;
	float		scale;
}				t_grid;

typedef struct	s_esector
{
	t_ipoint	*vertices;
	int			npoints;
}				t_esector;

typedef struct	s_editor
{
	t_grid		grid;
	t_esector	*sectors;
	int			nsectors;
}				t_editor;

unsigned		iround(unsigned dividend, unsigned divisor);

#endif
