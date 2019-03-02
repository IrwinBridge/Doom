/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:16:51 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:24:13 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_node	*dequeue(t_queue *queue)
{
	t_node	*tail;

	if (queue->tail == NULL)
		return (NULL);
	tail = queue->tail;
	queue->tail = queue->tail->next;
	if (queue->tail == NULL)
		queue->head = NULL;
	return (tail);
}
