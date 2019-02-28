/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unload_scene.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 10:01:03 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 13:56:35 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	unload_sounds(t_scene *scene)
{
	for (size_t i = 0; i < vector_size(&(scene->asset.sounds)); i++)
		unload_sound(((t_sound *)vector_get(&(scene->asset.sounds), i))->wave);
	for (size_t i = 0; i < vector_size(&(scene->asset.music)); i++)
		unload_music(((t_music *)vector_get(&(scene->asset.music), i))->wave);
	vector_erase(&(scene->asset.sounds));
	vector_erase(&(scene->asset.music));
}

bool	unload_scene(t_scene *scene)
{
	if (scene->is_loaded)
	{
		vector_erase(&(scene->resources.sounds));
		vector_erase(&(scene->resources.music));
		vector_erase(&(scene->resources.textures));
		vector_erase(&(scene->resources.sprites));
		vector_erase(&(scene->resources.fonts));
		vector_erase(&(scene->resources.maps));
		unload_sounds(scene);
		// vector_erase(&(scene->asset.textures));
		// vector_erase(&(scene->asset.sprites));
		// vector_erase(&(scene->asset.fonts));
		// vector_erase(&(scene->asset.maps));
		printf("Scene '%s' is unloaded now...\n", scene->name);
		scene->is_loaded = false;
	}
	else
	{
		printf("Nothing to unload...\n");
	}
	return (true);
}
