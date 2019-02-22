/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:40:43 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 17:18:50 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

void	parse_editor_events(ENGINE *doom, t_editor *editor)
{
	while (SDL_PollEvent(&EVENT))
	{
		if (ETYPE == SDL_QUIT)
			doom->mode = QUIT;
		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_ESCAPE)
			doom->mode = MAIN_MENU;

		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_LEFT)
			editor->grid.offset.x += (editor->grid.offset.x > 0) ? 0 : 5;
		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_RIGHT)
			editor->grid.offset.x -= 5;
		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_UP)
			editor->grid.offset.y += (editor->grid.offset.y > 0) ? 0 : 5;
		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_DOWN)
			editor->grid.offset.y -= 5;

		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_KP_PLUS)
			editor->grid.scale += (editor->grid.scale + 0.1f >= 10) ? 0 : 0.1f;
		if (ETYPE == SDL_KEYDOWN && KEY == SDLK_KP_MINUS)
			editor->grid.scale -= (editor->grid.scale - 0.1f <= 0.1f) ? 0 : 0.1f;

		if (ETYPE == SDL_MOUSEBUTTONDOWN && BUTTON == SDL_BUTTON_LEFT)
		{
			place_vertex(doom, editor);
		}
	}
}
