/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:43:43 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 15:14:27 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "drawer.h"

void	put_pixel(SDL_Surface *screen, int x, int y, Uint32 color)
{
	*(Uint32 *)(screen->pixels + (x + y * screen->w) * 4) = color;
}

void	safe_put_pixel(SDL_Surface *screen, int x, int y, Uint32 color)
{
	if (x < 0 || y < 0 || x > screen->w - 1 || y > screen->h - 1)
		return ;
	*(Uint32 *)(screen->pixels + (x + y * screen->w) * 4) = color;
}
