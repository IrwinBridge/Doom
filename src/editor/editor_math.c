/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 17:19:53 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 17:21:20 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

unsigned	iround(unsigned dividend, unsigned divisor)
{
    return (dividend + (divisor / 2)) / divisor;
}
