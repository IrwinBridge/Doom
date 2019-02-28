/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_asset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 14:01:32 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 21:06:44 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

/*
*************** Shall be rewritten *******************
*/

t_sound		*get_sound(t_scene *scene, char *name)
{
	t_vector	*sounds;
	size_t		i;

	i = 0;
	sounds = &(scene->asset.sounds);
	while (i < vector_size(sounds))
	{
		if (strcmp(((t_sound *)vector_get(sounds, i))->name, name) == 0)
			return ((t_sound *)vector_get(sounds, i));
		i++;
	}
	return (NULL);
}

t_music		*get_music(t_scene *scene, char *name)
{
	t_vector	*music;
	size_t		i;

	i = 0;
	music = &(scene->asset.music);
	while (i < vector_size(music))
	{
		if (strcmp(((t_music *)vector_get(music, i))->name, name) == 0)
			return ((t_music *)vector_get(music, i));
		i++;
	}
	return (NULL);
}

t_texture	*get_texture(t_scene *scene, char *name)
{
	t_vector	*textures;
	size_t		i;

	i = 0;
	textures = &(scene->asset.textures);
	while (i < vector_size(textures))
	{
		if (strcmp(((t_texture *)vector_get(textures, i))->name, name) == 0)
			return ((t_texture *)vector_get(textures, i));
		i++;
	}
	return (NULL);
}
