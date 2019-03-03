/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:37:51 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 16:40:47 by cmelara-         ###   ########.fr       */
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
}				t_player;

#endif
