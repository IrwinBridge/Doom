/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:42:30 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 13:45:22 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	destroy_manager(t_scene_manager *manager)
{
	unload_scene(&(manager->scene));
	free(manager->paths);
	printf("Everything is destoryed\n");
}
