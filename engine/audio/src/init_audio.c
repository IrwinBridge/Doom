/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_audio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 22:16:04 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:36:53 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "audio.h"

bool	init_audio()
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
