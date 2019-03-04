/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 14:42:37 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/04 15:02:02 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAWER_H
# define DRAWER_H

# ifdef __linux__
#  include <SDL2/SDL.h>
# else
#  include "SDL.h"
# endif

void	put_pixel(SDL_Surface *screen, int x, int y, Uint32 color);
void	safe_put_pixel(SDL_Surface *screen, int x, int y, Uint32 color);

#endif
