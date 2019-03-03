/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 17:17:33 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 17:40:39 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "textures.h"

t_texture	*load_texture(char *path, char *name)
{
	t_texture	*texture;

	texture = malloc(sizeof(t_texture));
	texture->image = read_tga(path);
	strcpy(texture->name, name);
	if (!texture->image)
	{
		printf("Error loading from the path: %s\n", path);
		return (NULL);
	}
	return (texture);
}
