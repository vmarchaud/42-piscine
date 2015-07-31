/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 17:54:27 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 23:39:33 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int					display_map(t_map *map)
{
	unsigned int i;

	free(map->tab);
	i = 0;
	while (i != map->size && map->str[i] != '\0')
	{
		if (is_in_square(i, map) && map->str[i] != '\n')
			ft_putchar(map->square);
		else
			ft_putchar(map->str[i]);
		i++;
	}
	return (0);
}

int					prepare(t_map *map)
{
	int		i;

	i = 0;
	while (map->str[i] != '\n')
		i++;
	map->square = map->str[i - 1];
	map->obstacle = map->str[i - 2];
	map->empty = map->str[i - 3];
	map->square_size = 0;
	map->square_index = 0;
	map->height = ft_atoi(map->str);
	map->str = map->str + i + 1;
	return (0);
}

unsigned int		min(unsigned int i, unsigned j, unsigned int k)
{
	unsigned int min;

	min = i;
	if (j <= i && j <= k)
		min = j;
	if (k <= j && k <= i)
		min = k;
	return (min);
}

unsigned int		resolve(unsigned int *tab, unsigned int index, t_map *map)
{
	tab[index] = min(tab[index - 1], tab[index - map->width],
			tab[index - map->width - 1]) + 1;
	if (tab[index] > map->square_size)
	{
		map->square_size = tab[index];
		map->square_index = index;
	}
	return (tab[index]);
}

int					mapping(t_map *map)
{
	unsigned int		i;
	unsigned int		j;

	if ((map->tab = malloc(sizeof(unsigned int) * map->size)) == 0)
		return (-1);
	i = 0;
	j = 0;
	while (map->str[i] != '\0')
	{
		if (map->str[i] == '\n')
		{
			i++;
			continue;
		}
		else if (i < map->width)
			map->tab[j] = map->str[i] == map->obstacle ? 0 : 1;
		else if (map->str[i - 1] == '\n')
			map->tab[j] = map->str[i] == map->obstacle ? 0 : 1;
		else
			map->tab[j] = map->str[i] == map->obstacle ? 0 :
				resolve(map->tab, j, map);
		i++;
		j++;
	}
	return (0);
}
