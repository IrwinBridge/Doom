/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:37:51 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 13:53:40 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_H
# define ENTITY_H

# include "types.h"

typedef struct	s_player
{
	t_position	pos;
	float		angle;
	float		pitch;
	float		anglesin;
	float		anglecos;
	unsigned	sector;
	float		eyes_height;
	float		couch_height;
}				t_player;

#endif
