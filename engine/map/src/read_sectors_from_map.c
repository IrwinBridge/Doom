/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_sectors_from_map.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelara- <cmelara-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:21:07 by cmelara-          #+#    #+#             */
/*   Updated: 2019/03/03 21:27:47 by cmelara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_fpoint	*parse_point(char *map, int i)
{
	t_fpoint	*point;

	point = malloc(sizeof(t_fpoint));
	while (!isdigit(map[i]))
		i++;
	point->x = atof(&map[i]);
	while (!isspace(map[i]))
		i++;
	while (!isdigit(map[i]))
		i++;
	point->y = atof(&map[i]);
	return (point);
}

t_sector	*parse_sector(char *map, int i, t_vector *points)
{
	t_sector	*sector;
	t_fpoint	*point;
	t_fpoint	*vertex;
	int			*neighbor;

	sector = malloc(sizeof(t_sector));
	sector->floor = next_float(map, &i);
	sector->ceiling = next_float(map, &i);
	vector_init(&(sector->vertices), 0);
	while (!isdigit(map[i]))
		i++;
	while (map[i] != '\t')
	{
		point = (t_fpoint *)vector_get(points, (int)next_float(map, &i));
		vertex = malloc(sizeof(t_fpoint));
		*vertex = *point;
		vector_push(&(sector->vertices), vertex);
	}
	vector_init(&(sector->neighbors), 0);
	while (map[i] != '\n')
	{
		neighbor = malloc(sizeof(int));
		*neighbor = (int)next_float(map, &i);
		vector_push(&(sector->neighbors), neighbor);
	}
	return (sector);
}

void		read_sectors_from_map(t_vector *sectors, char *map)
{
	t_vector	points;
	t_fpoint	*point;
	t_sector	*sector;
	int			i;

	vector_init(&points, 0);
	i = 0;
	while (map[i])
	{
		if ((i = next_char(map, i, 'v')) < 0)
			break ;
		point = parse_point(map, i);
		vector_push(&points, point);
		i++;
	}
	if (vector_size(&points) == 0)
		return ;
	i = 0;
	while (map[i])
	{
		if ((i = next_char(map, i, 's')) < 0)
			break ;
		sector = parse_sector(map, i, &points);
		vector_push(sectors, sector);
		i++;
	}
	vector_erase(&points);
	printf("Read sectors from map\n");
}
