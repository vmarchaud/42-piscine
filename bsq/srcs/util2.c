/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 15:03:10 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 23:30:58 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char				*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

unsigned int		get_height(char *str)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int					is_in_square(unsigned int index, t_map *map)
{
	unsigned int sq_i;
	unsigned int i;
	unsigned int j;
	unsigned int k;

	sq_i = map->square_index + (map->square_index / map->width);
	i = sq_i - ((map->width + 1) * (map->square_size - 1))
		- map->square_size + 1;
	j = i;
	k = 1;
	if (index < i)
		return (0);
	while (j <= sq_i)
	{
		if (index == j)
			return (1);
		if (k == map->square_size)
		{
			j = j + map->width + 1 - map->square_size;
			k = 0;
		}
		k++;
		j++;
	}
	return (0);
}

int					verify_map(t_map *map)
{
	unsigned int i;

	if (map->height != get_height(map->str))
		return (-1);
	i = 0;
	while (map->str[i] != '\0')
	{
		if (map->str[i] != map->empty && map->str[i] != map->square &&
				map->str[i] != map->obstacle && map->str[i] != '\n')
			return (-1);
		i++;
	}
	if (map->obstacle == map->empty || map->obstacle == map->square ||
			map->square == map->empty)
		return (-1);
	map->width = get_width(map->str);
	return (0);
}

int					ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		negativ = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}
