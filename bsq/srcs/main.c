/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 16:09:44 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 23:40:50 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <unistd.h>

int		bsq(char *str, t_map *map, int in)
{
	if (read_file(str, map, in) != 0)
		return (-1);
	prepare(map);
	if (verify_map(map) != 0)
		return (-1);
	if (mapping(map) != 0)
		return (-1);
	display_map(map);
	return (0);
}

int		main(int size, char **args)
{
	int		i;
	t_map	*map;

	if (size == 1)
	{
		map = malloc(sizeof(map));
		if (!map || bsq(0, map, 0) == -1)
			write(2, "map error\n", 10);
		free(map);
		map = NULL;
		return (0);
	}
	i = 1;
	while (i < size)
	{
		map = malloc(sizeof(map));
		if (!map || bsq(args[i], map, open_file(args[i])) == -1)
			write(2, "map error\n", 10);
		i++;
		free(map);
		map = NULL;
	}
	return (0);
}
