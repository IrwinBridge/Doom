/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:18:35 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:47:48 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	*load_map(char *path, char *name)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	map->data = read_map(path);
	strcpy(map->name, name);
	if (!map->data)
	{
		printf("Error loading from the path: %s\n", path);
		return (NULL);
	}
	return (map);
}
