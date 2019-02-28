/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramory-l <ramory-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 11:55:28 by ramory-l          #+#    #+#             */
/*   Updated: 2019/02/26 12:05:19 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include <stdarg.h>
# include <stdlib.h>

# define VECTOR_INIT(size, vec, ...) t_vector vec; vector_init(&vec, size, __VA_ARGS__)
# define VECTOR_PUSH(vec, data) vector_push(&vec, (void *)data)
# define VECTOR_INSERT(vec, id, data) vector_insert(&vec, id, (void *)data)
# define VECTOR_GET(vec, type, id) (type) vector_get(&vec, id)
# define VECTOR_DELETE(vec, id) vector_delete(&vec, id)
# define VECTOR_SIZE(vec) vector_size(&vec)
# define VECTOR_RESIZE(vec, size) vector_resize(&vec, size)
# define VECTOR_CAPACITY(vec) vector_capacity(&vec)
# define VECTOR_ERASE(vec) vector_erase(&vec)

typedef struct	s_vector
{
	void		**data;
	size_t		size;
}				t_vector;

size_t	vector_size(t_vector *vector);
void    vector_resize(t_vector *vector, size_t size);
size_t	vector_capacity(t_vector *vector);
void    vector_init(t_vector *vector, size_t size, ...);
void    vector_erase(t_vector *vector);
void    *vector_get(t_vector *vector, size_t index);
void    vector_delete(t_vector *vector, size_t index);
void    vector_insert(t_vector *vector, size_t index, void *data);
void    vector_push(t_vector *vector, void *data);
void    vector_pop(t_vector *vector);

#endif
