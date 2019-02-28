/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene_manager.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 09:58:20 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/27 21:07:14 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_MANAGER_H
# define SCENE_MANAGER_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

/*
***************** Type dependencies ****************
*/
# include "sound.h"
# include "textures.h"

/*
***************** Native dependencies **************
*/
# include <stdbool.h>
# include <stdio.h>
# include "vector.h"
# include "io.h"

typedef enum		e_asset_type
{
	SOUNDS,
	MUSIC,
	TEXTURES,
	SPRITES,
	FONTS,
	MAPS
}					t_asset_type;

typedef struct		s_path
{
	char			name[64];
	char			path[256];
}					t_path;

typedef struct		s_resources
{
	t_vector		sounds;
	t_vector		music;
	t_vector		textures;
	t_vector		sprites;
	t_vector		fonts;
	t_vector		maps;
}					t_resources;

typedef struct		s_asset
{
	t_vector		sounds;
	t_vector		music;
	t_vector		textures;
	t_vector		sprites;
	t_vector		fonts;
	t_vector		maps;
}					t_asset;

typedef struct		s_scene
{
	char			*name;
	bool			is_loaded;
	t_resources		resources;
	t_asset			asset;
}					t_scene;

typedef struct	s_scene_manager
{
	t_scene		scene;
	t_path		*paths;
	int			scenes_count;
}				t_scene_manager;

void	init_manager(t_scene_manager *manager);
bool	load_scene(t_scene_manager *manager, char *scene);
bool	unload_scene(t_scene *scene);
void	destroy_manager(t_scene_manager *manager);

void	load_paths(t_scene_manager *manager);
bool	load_resource_paths(t_scene_manager *manager, char *name);
void	load_scene_block(t_vector *paths, t_asset_type type, char *scene_file);
char	*get_scene_path(t_scene_manager *manager, char *name);

void	load_asset(t_scene *scene);
void	load_asset_of_type(t_vector *assets, t_asset_type type, t_vector paths);

t_sound		*get_sound(t_scene *scene, char *name);
t_music		*get_music(t_scene *scene, char *name);
t_texture	*get_texture(t_scene *scene, char *name);

#endif
