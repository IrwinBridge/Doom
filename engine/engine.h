/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:16:16 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:25:16 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_H
# define ENGINE_H

# include "window.h"
# include "scene_manager.h"
# include "textures.h"
# include "sound.h"

typedef	struct		s_engine
{
	t_window		window;
	t_scene_manager	manager;
}					t_engine;

#endif
