/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sound_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:16:04 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 15:17:04 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sound.h"

bool	sound_init()
{
	int		frequency;
	Uint16	format;
	int		channels;
	int		chunksize;

	frequency = 22050;
	format = MIX_DEFAULT_FORMAT;
	channels = 2;
	chunksize = 2048;
	if (Mix_OpenAudio(frequency, format, channels, chunksize) < 0)
	{
		perror(Mix_GetError());
		return (false);
	}
	Mix_Init(MIX_INIT_OGG);
	return (true);
}
