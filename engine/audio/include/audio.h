/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   audio.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 21:40:00 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:34:46 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOUND_H
# define SOUND_H

# ifdef __linux__
#  include <SDL2/SDL_mixer.h>
# else
#  include "SDL_mixer.h"
# endif

# include "stdbool.h"

typedef struct	s_sound
{
	char		name[80];
	Mix_Chunk	*wave;
}				t_sound;

typedef struct	s_music
{
	char		name[80];
	Mix_Music	*wave;
}				t_music;

bool	init_audio();
void	destroy_audio();

t_sound	*load_sound(char *path, char *name);
t_music	*load_music(char *path, char *name);

void	unload_sound(Mix_Chunk *wave);
void	unload_music(Mix_Music *wave);

void	play_sound(Mix_Chunk *wave);
void	play_music(Mix_Music *wave);

#endif
