/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:23:37 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:36:50 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

#include "engine.h"

typedef struct	s_game
{
	bool		playing;
}				t_game;

void	init_game(t_engine *engine, t_game *game);
void	process_game(t_engine *engine, t_game *game);
void	quit_game(t_engine *engine);

void	process_events(t_engine *engine, t_game *game);
void	process_logic(t_engine *engine, t_game *game);
void	render_game(t_engine *engine, t_game *game);

#endif
