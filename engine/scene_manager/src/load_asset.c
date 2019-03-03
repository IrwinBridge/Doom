/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_asset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irvin <irvin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 21:09:21 by irvin             #+#    #+#             */
/*   Updated: 2019/03/03 16:11:26 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scene_manager.h"

void	load_asset(t_scene *scene)
{
	t_resources	*resources;
	t_asset		*asset;

	resources = &(scene->resources);
	asset = &(scene->asset);
	load_asset_of_type(&(asset->sounds), SOUNDS, resources->sounds);
	load_asset_of_type(&(asset->music), MUSIC, resources->music);
	load_asset_of_type(&(asset->textures), TEXTURES, resources->textures);
	// load_asset_of_type(&(asset->sprites), SPRITES, resources->sprites);
	// load_asset_of_type(&(asset->fonts), FONTS, resources->fonts);
	load_asset_of_type(&(asset->maps), MAPS, resources->maps);
}
