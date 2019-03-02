/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:26:46 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:44:41 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

typedef enum	e_evtype
{
	KEY_DOWN,
	KEY_UP,
	MOUSE_MOTION,
	MOUSE_BUTTON_DOWN,
	MOUSE_BUTTON_UP,
	MOUSE_WHEEL,
	QUIT
}				t_evtype;

typedef struct	s_event
{
	t_evtype	type;
	void		*event;
}				t_event;

#endif
