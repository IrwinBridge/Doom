/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 12:56:59 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 16:38:13 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct	s_fpoint
{
	float		x;
	float		y;
}				t_fpoint;

typedef struct	s_ipoint
{
	int			x;
	int			y;
}				t_ipoint;

typedef struct	s_position
{
	float		x;
	float		y;
	float		z;
}				t_position;

typedef struct	s_axis
{
	int			horizontal;
	int			vertical;
}				t_axis;

#endif
