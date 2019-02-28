/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_mods2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramory-l <ramory-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 12:50:18 by ramory-l          #+#    #+#             */
/*   Updated: 2019/02/26 10:51:32 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void    vector_insert(t_vector *vector, size_t index, void *data)
{
    size_t i;
    if (index < vector->size)
    {
        vector->size++;
        i = vector->size - 1;
        vector->data = realloc(vector->data, sizeof(vector->data) * vector->size);
        while (i > index)
        {
            vector->data[i] = vector->data[i - 1];
            i--;
        }
        vector->data[i] = data;
    }
}

void    vector_delete(t_vector *vector, size_t index)
{
    size_t i;

	if (index < vector->size)
	{
		i = index;
    	vector->data[index] = NULL;
    	while (i < vector->size - 1)
   		{
        	vector->data[i] = vector->data[i + 1];
        	vector->data[i + 1] = NULL;
        	i++;
    	}
    	vector->size--;
    	vector->data = realloc(vector->data, sizeof(vector->data) * vector->size);
	}
}

void    vector_resize(t_vector *vector, size_t size)
{
    if (size > vector->size)
    {
        vector->data = realloc(vector->data, sizeof(vector->data) * size);
        vector->size = size;
    }
    else
    {
        while (vector->size > size)
        {
            vector->data[vector->size] = NULL;
            vector->size--;
        }
        vector->data = realloc(vector->data, sizeof(vector->data) * size);
    }

}
