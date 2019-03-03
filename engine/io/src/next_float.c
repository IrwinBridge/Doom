/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_float.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:11:03 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 21:05:20 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

float	next_float(char *str, int *i)
{
	float	n;

	while (!is_numeric(&str[*i]))
		(*i)++;
	n = atof(&str[*i]);
	while(is_numeric(&str[*i]))
		(*i)++;
	return (n);
}
