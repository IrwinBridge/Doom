/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 17:48:05 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 21:29:28 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map_data	*read_map(char *path)
{
	t_map_data	*data;
	char		*map_str;

	data = malloc(sizeof(t_map_data));
	map_str = file_to_string(path);
	vector_init(&(data->sectors), 0);
	vector_init(&(data->textures), 0);
	vector_init(&(data->lights), 0);
	vector_init(&(data->entities), 0);
	read_sectors_from_map(&(data->sectors), map_str);
	read_textures_from_map(&(data->textures), map_str);
	read_lights_from_map(&(data->lights), map_str);
	read_entities_from_map(&(data->entities), map_str);
	read_player_from_map(&(data->player), map_str);
	return (data);
}
