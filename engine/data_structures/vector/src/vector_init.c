/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramory-l <ramory-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 12:47:12 by ramory-l          #+#    #+#             */
/*   Updated: 2019/02/26 10:49:23 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void    vector_init(t_vector *vector, size_t size, ...)
{
    size_t  i;
    va_list args;

	if (size >= 0)
	{
		i = 0;
    	va_start(args, size);
    	vector->size = size;
    	vector->data = (void **)malloc(sizeof(void *) * size);
    	while (i < vector->size)
    	{
        	vector->data[i] = va_arg(args, void *);
        	i++;
    	}
	}
}

void    vector_erase(t_vector *vector)
{
    free(vector->data);
}

size_t	vector_capacity(t_vector *vector)
{
	return(vector->size * sizeof(vector->data));
}

size_t	vector_size(t_vector *vector)
{
    return (vector->size);
}
