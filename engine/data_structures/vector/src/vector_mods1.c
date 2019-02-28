/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_mods1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramory-l <ramory-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 12:48:57 by ramory-l          #+#    #+#             */
/*   Updated: 2019/02/26 10:50:52 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void    *vector_get(t_vector *vector, size_t index)
{
    return (vector->data[index]);
}

void    vector_push(t_vector *vector, void *data)
{
    vector->size++;
    vector->data = realloc(vector->data, sizeof(vector->data) * vector->size);
    vector->data[vector->size - 1] = data;
}

void    vector_pop(t_vector *vector)
{
	if (vector->size > 0)
	{
		vector->data[vector->size - 1] = NULL;
    	vector->size--;
    	vector->data = realloc(vector->data, sizeof(vector->data) * vector->size);
	}
}
