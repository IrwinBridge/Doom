/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:06:37 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 21:03:44 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

bool	is_numeric(char *str)
{
	if (str == NULL || *str == '\0' || isspace(*str))
		return (false);
	if (*str == '-' && isdigit(*(str + 1)))
		return (true);
	if (isdigit(*str))
		return (true);
	return (false);
}
