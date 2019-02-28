/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:00:05 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:24:52 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "window.h"

bool	create_window(t_window *window, const char *title, int w, int h)
{
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
		return (false);
	if (!(window->window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED,
													SDL_WINDOWPOS_CENTERED,
													w, h, SDL_WINDOW_OPENGL)))
		return (false);
	if (!(window->screen = SDL_GetWindowSurface(window->window)))
		return (false);
	update_window(window);
	return (true);
}
