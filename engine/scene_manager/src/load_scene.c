/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_scene.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:31:08 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 21:31:31 by irvin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

bool	load_scene(t_scene_manager *manager, char *name)
{
	t_scene	*scene;

	scene = &(manager->scene);
	unload_scene(scene);
	if (!load_resource_paths(manager, name))
		return (false);
	load_asset(&(manager->scene));
	scene->name = name;
	scene->is_loaded = true;
	printf("Scene '%s' is loaded now...\n", scene->name);
	return (true);
}
