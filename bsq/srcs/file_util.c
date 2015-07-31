/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 21:31:17 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 23:20:24 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

unsigned int	get_size(char *path, int in)
{
	char			*buffer;
	int				ret_in;
	unsigned int	size;

	if ((in = open(path, O_RDONLY)) == -1)
		return (-1);
	size = 0;
	buffer = malloc(BUFFER_SIZE + 1);
	while ((ret_in = read(in, buffer, BUFFER_SIZE)) > 0)
	{
		size += ret_in;
	}
	free(buffer);
	return (size);
}

int				read_file(char *path, t_map *map, int in)
{
	char			*buffer;
	int				ret_in;

	map->size = get_size(path, in);
	if (map->size == 0)
		return (-1);
	if ((map->str = malloc(sizeof(char) * map->size)) == 0)
		return (-1);
	if ((buffer = malloc(BUFFER_SIZE + 1)) == 0)
		return (-1);
	while ((ret_in = read(in, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret_in] = '\0';
		ft_strcat(map->str, buffer);
	}
	free(buffer);
	return (0);
}

int				open_file(char *path)
{
	int fd;

	if ((fd = open(path, O_RDONLY)) == -1)
		return (-1);
	return (fd);
}
