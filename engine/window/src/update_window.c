/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 18:18:43 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/28 20:24:01 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "window.h"

void	update_window(t_window *window)
{
	SDL_UpdateWindowSurface(window->window);
}
