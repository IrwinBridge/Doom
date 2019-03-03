/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:16:02 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:27:23 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "io.h"
# include "vector.h"
# include "entity.h"

typedef struct	s_map_data
{
	t_vector	sectors;
	t_vector	textures;
	t_vector	lights;
	t_vector	entities;
	t_player	player;
}				t_map_data;

typedef struct	s_map
{
	char		name[80];
	t_map_data	*data;
}				t_map;

t_map			*load_map(char *path, char *name);

#endif
