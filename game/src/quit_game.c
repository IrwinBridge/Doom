/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:32:06 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 17:36:27 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	quit_game(t_engine *engine)
{
	destroy_manager(&(engine->manager));
	destroy_audio();
	destroy_window(&(engine->window));
}
