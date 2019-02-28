/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:39:23 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 21:08:27 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	render_game(t_engine *engine, t_game *game)
{
	SDL_FillRect(engine->window.screen, NULL, 0xFFFFFF);
	update_window(&(engine->window));
}
