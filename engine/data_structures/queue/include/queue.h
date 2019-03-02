/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:16:25 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:25:14 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include <stdlib.h>

typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_queue
{
	t_node			*head;
	t_node			*tail;
}					t_queue;

t_node				*create_node(void *data);
t_queue				*create_queue();
void				destroy_queue(t_queue *queue);

void				enqueue(t_queue *queue, void *data);
t_node				*dequeue(t_queue *queue);

#endif
