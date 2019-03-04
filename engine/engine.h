/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:16:16 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 14:03:03 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_H
# define ENGINE_H

# include "window.h"
# include "scene_manager.h"
# include "timer.h"
# include "events.h"
# include "render.h"
# include "textures.h"
# include "audio.h"

typedef	struct		s_engine
{
	t_window		window;
	t_scene_manager	manager;
	t_events		events;
	t_render		render;
	t_timer			timer;
	t_player		*player;
}					t_engine;

#endif
