/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:38:20 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 13:33:37 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	init_manager(t_scene_manager *manager)
{
	t_scene	*scene;

	load_paths(manager);
	scene = &(manager->scene);
	scene->is_loaded = false;
}
