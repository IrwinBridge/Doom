/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_queue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:58:30 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 16:02:01 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	destroy_queue(t_queue *queue)
{
	t_node	*node;

	while (queue->tail != queue->head)
	{
		node = queue->tail;
		queue->tail = queue->tail->next;
		node->next = NULL;
		free(node->data);
	}
	free(queue);
}
