/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_scene_from_file.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:11:44 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 19:10:59 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

bool	load_resource_paths(t_scene_manager *manager, char *name)
{
	char	path[256];
	char	*subpath;
	char	*scene_file;
	t_scene	*scene;

	if (!(subpath = get_scene_path(manager, name)))
		return (false);
	strcpy(path, "game/resources/");
	strcat(path, subpath);
	scene_file = file_to_string(path);
	scene = &(manager->scene);
	load_scene_block(&(scene->resources.sounds), SOUNDS, scene_file);
	load_scene_block(&(scene->resources.music), MUSIC, scene_file);
	load_scene_block(&(scene->resources.textures), TEXTURES, scene_file);
	load_scene_block(&(scene->resources.sprites), SPRITES, scene_file);
	load_scene_block(&(scene->resources.fonts), FONTS, scene_file);
	load_scene_block(&(scene->resources.maps), MAPS, scene_file);
	free(scene_file);
	return (true);
}
