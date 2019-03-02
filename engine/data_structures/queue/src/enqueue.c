/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 16:03:08 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:21:03 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	enqueue(t_queue *queue, void *data)
{
	t_node	*node;

	node = create_node(data);
	if (queue->head = NULL)
	{
		queue->tail = node;
		queue->head = node;
		return ;
	}
	queue->head->next = node;
	queue->head = node;
}
