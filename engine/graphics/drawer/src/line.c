/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 21:54:23 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 22:06:56 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "drawer.h"

void	line(SDL_Surface *screen, int x, int y1, int y2, Uint32 color)
{
	int y;

	y1 = fclamp(y1, 0, screen->h - 1);
	y2 = fclamp(y2, 0, screen->h - 1);
	if (y2 > y1)
	{
		y = y1;
		while (y <= y2)
		{
			safe_put_pixel(screen, x, y, color);
			y++;
		}
	}
}
