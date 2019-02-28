/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 19:24:32 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 21:06:07 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main(int argc, char **argv)
{
	t_engine	engine;
	t_game		game;

	init_game(&engine, &game);
	process_game(&engine, &game);
	quit_game(&engine);
	return (0);
}
