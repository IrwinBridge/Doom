/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:49:35 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 13:51:14 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

char	*file_to_string(const char *filename)
{
	SDL_RWops	*stream;
	Sint64		size;
	Sint64		read;
	char		*string;

	stream = SDL_RWFromFile(filename, "r");
	if (stream == NULL)
		return (NULL);
	size = SDL_RWsize(stream);
	string = malloc(size + 1);
	read = SDL_RWread(stream, string, size, 1);
	SDL_RWclose(stream);
	string[size] = '\0';
	return (string);
}
