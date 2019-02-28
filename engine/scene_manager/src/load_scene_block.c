/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_scene_block.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 16:52:43 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 18:47:38 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

char	*type_to_string(t_asset_type type)
{
	if (type == SOUNDS)
		return ("SOUNDS");
	else if (type == MUSIC)
		return ("MUSIC");
	else if (type == TEXTURES)
		return ("TEXTURES");
	else if (type == SPRITES)
		return ("SPRITES");
	else if (type == FONTS)
		return ("FONTS");
	else if (type == MAPS)
		return ("MAPS");
	return (NULL);
}

void	load_scene_block(t_vector *paths, t_asset_type type, char *scene_file)
{
	int		i;
	int		j;
	char	*block;
	t_path	*path;
	int		vars_count;

	block = type_to_string(type);
	i = go_to_block(scene_file, block);
	j = 0;
	vector_init(paths, 0);
	vars_count = ini_count_vars(&scene_file[i]);
	while (j < vars_count)
	{
		path = (t_path *)malloc(sizeof(t_path));
		strcpy(path->name, ini_next_name(&scene_file[i], j == 0));
		strcpy(path->path, ini_next_value(&scene_file[i], j == 0));
		vector_push(paths, path);
		j++;
	}
}
