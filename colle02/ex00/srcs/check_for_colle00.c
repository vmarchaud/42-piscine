/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_colle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 17:46:51 by sganon            #+#    #+#             */
/*   Updated: 2015/07/26 23:43:33 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static int		check_for_top(char *str, int w)
{
	int i;

	i = 1;
	while (i < w - 1)
	{
		if (str[i] != '-')
			return (0);
		i++;
	}
	if (str[i] != 'o' && w > 1)
		return (0);
	else
		return (1);
}

static int		check_for_bottom(char *str, int i, int w)
{
	while (str[i] != '\n')
	{
		if (str[i] != 'o')
			if (str[i] != '-' && w > 2)
				return (0);
		i++;
		return (1);
	}
	if (str[i + 1])
		return (0);
	return (1);
}

static int		check_for_body(char *str, int w, int h)
{
	int i;

	i = (w + 2);
	if (h > 2)
	{
		while (str[i] == '|' || str[i] == ' ' || str[i] == '\n')
			i++;
		if (str[i] == 'o')
		{
			if (check_for_bottom(str, i, w) == 1)
				return (1);
			return (0);
		}
		return (0);
	}
	else
	{
		if (check_for_bottom(str, i, w) == 1)
			return (1);
		return (0);
	}
}

int				check_for_colle00(char *str, int w, int h)
{
	if (w == 1 && h == 1)
		return (0);
	else if (h == 1 && check_for_top(str, w) == 1)
		return (0);
	else if (check_for_top(str, w) == 1 && check_for_body(str, w, h) == 1)
		return (0);
	return (-1);
}
