/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_queue.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:22:51 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/02 14:32:27 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_node	*create_node(void *data)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	temp->data = data;
	temp->next = NULL;
	return (temp);
}

t_queue	*create_queue()
{
	t_queue	*queue;

	queue = (t_queue *)malloc(sizeof(t_queue));
	queue->head = NULL;
	queue->tail = NULL;
	return (queue);
}
