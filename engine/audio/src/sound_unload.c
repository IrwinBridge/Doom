/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sound_unload.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 13:49:05 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:37:10 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "audio.h"

void	unload_sound(Mix_Chunk *wave)
{
	Mix_FreeChunk(wave);
	wave = NULL;
}

void	unload_music(Mix_Music *wave)
{
	Mix_FreeMusic(wave);
	wave = NULL;
}
