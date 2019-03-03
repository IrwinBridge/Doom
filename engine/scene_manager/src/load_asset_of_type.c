/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_asset_of_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irvin <irvin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 21:20:47 by irvin             #+#    #+#             */
/*   Updated: 2019/03/03 16:14:09 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	*load_asset_from_path(char *path, char *name, t_asset_type type)
{

	if (type == SOUNDS)
		return (load_sound(path, name));
	else if (type == MUSIC)
		return (load_music(path, name));
	else if (type == TEXTURES)
		return (load_texture(path, name));
	// Not implemented yet
	// else if (type == SPRITES)
	// 	return (load_sprite(path));
	// else if (type == FONTS)
	// 	return (load_font(path));
	else if (type == MAPS)
		return (load_map(path, name));
	return (NULL);
}

void	load_asset_of_type(t_vector *assets, t_asset_type type, t_vector paths)
{
	int		i;
	char	path[266];
	char	name[80];

	i = 0;
	vector_init(assets, 0);
	while (i < vector_size(&paths))
	{
		strcpy(path, "game/resources/");
		strcat(path, ((t_path *)vector_get(&paths, i))->path);
		strcpy(name, ((t_path *)vector_get(&paths, i))->name);
		printf("Loading from: %s...\n", path);
		vector_push(assets, load_asset_from_path(path, name, type));
		i++;
	}
}
