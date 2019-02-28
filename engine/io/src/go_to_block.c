/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:29:44 by cmelara-          #+#    #+#             */
/*   Updated: 2019/02/26 18:09:41 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

int		go_to_block(char *str, char *block)
{
	int		i;
	char	str_block[80];
	size_t	block_size;

	i = 0;
	block_size = strlen(block);
	while (str[i])
	{
		if (str[i] == '#')
			i = next_line(str, i);
		if (str[i] == '[')
		{
			i++;
			strncpy(str_block, &str[i], block_size);
			if (strncmp(str_block, block, block_size) == 0)
			{
				i = next_line(str, i);
				return (i);
			}
		}
		i++;
	}
}
