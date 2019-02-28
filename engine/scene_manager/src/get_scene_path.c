/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_scene_path.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:30:09 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 15:36:31 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

char	*get_scene_path(t_scene_manager *manager, char *name)
{
	int	i;

	i = 0;
	while (i < manager->scenes_count)
	{
		if (strcmp(name, manager->paths[i].name) == 0)
			return (manager->paths[i].path);
		i++;
	}
	return (NULL);
}
