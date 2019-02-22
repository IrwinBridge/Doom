/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   editor.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <anton@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:37:26 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/22 14:09:21 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

DN_ERROR	show_editor(ENGINE *doom)
{
	t_editor	editor;

	show_mouse(doom);
	init_editor(&editor);
	while (doom->mode == MAP_EDITOR)
	{
		parse_editor_events(doom, &editor);
		render_editor(doom, &editor);
	}
	hide_mouse(doom);
	return (OK);
}
