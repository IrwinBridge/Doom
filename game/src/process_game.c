/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 20:28:40 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:35:15 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	process_game(t_engine *engine, t_game *game)
{
	while (game->playing)
	{
		process_events(engine, game);
		process_logic(engine, game);
		render_game(engine, game);
	}
}
