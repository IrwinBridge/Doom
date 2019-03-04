/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:16:02 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 13:57:11 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "io.h"
# include "vector.h"
# include "entity.h"

typedef struct	s_sector
{
	float		floor;
	float		ceiling;
	t_vector	vertices;
	t_vector	neighbors;
}				t_sector;

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
t_map_data		*read_map(char *path);

void			read_sectors_from_map(t_vector *sectors, char *map);
void			read_textures_from_map(t_vector *textures, char *map);
void			read_lights_from_map(t_vector *lights, char *map);
void			read_entities_from_map(t_vector *entities, char *map);
void			read_player_from_map(t_player *player, t_vector	*sectors, char *map);

#endif
