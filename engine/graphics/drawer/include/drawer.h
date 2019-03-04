/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:42:37 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 22:06:46 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAWER_H
# define DRAWER_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

# include "emath.h"

void	put_pixel(SDL_Surface *screen, int x, int y, Uint32 color);
void	safe_put_pixel(SDL_Surface *screen, int x, int y, Uint32 color);
void	line(SDL_Surface *screen, int x, int y1, int y2, Uint32 color);

#endif
