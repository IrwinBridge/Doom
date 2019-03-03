/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_sound.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 14:12:02 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:37:00 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "audio.h"

void	play_sound(Mix_Chunk *wave)
{
	Mix_PlayChannel(-1, wave, 0);
}

void	play_music(Mix_Music *wave)
{
	Mix_PlayMusic(wave, -1);
}
