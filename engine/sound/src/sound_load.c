/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sound_load.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:07:29 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 16:47:37 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sound.h"

t_sound	*load_sound(char *path, char *name)
{
	t_sound		*sound;

	sound = malloc(sizeof(t_sound));
	sound->wave = Mix_LoadWAV(path);
	strcpy(sound->name, name);
	if (!sound->wave)
	{
		printf("Error loading from the path: %s\n", path);
		return (NULL);
	}
	return (sound);
}

t_music	*load_music(char *path, char *name)
{
	t_music		*music;

	music = malloc(sizeof(t_music));
	music->wave = Mix_LoadMUS(path);
	strcpy(music->name, name);
	if (!music->wave)
	{
		printf("Error loading from the path: %s\n", path);
		return (NULL);
	}
	return (music);
}
