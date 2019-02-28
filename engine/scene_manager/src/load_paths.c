/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_paths.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:33:59 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 19:10:47 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	load_paths(t_scene_manager *manager)
{
	char	*ini_file;
	int		i;

	printf("Loading scenes from 'scenes.ini'...\n");
	ini_file = file_to_string("game/resources/scenes.ini");
	manager->scenes_count = ini_count_vars(ini_file);
	manager->paths = (t_path *)malloc(sizeof(t_path) * manager->scenes_count);
	i = 0;
	while (i < manager->scenes_count)
	{
		strcpy(manager->paths[i].name, ini_next_name(ini_file, i == 0));
		strcpy(manager->paths[i].path, ini_next_value(ini_file, i == 0));
		i++;
	}
	free(ini_file);
}
