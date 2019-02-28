/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:01:45 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:23:54 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "window.h"

void	destroy_window(t_window *window)
{
	SDL_DestroyWindow(window->window);
    SDL_Quit();
}
