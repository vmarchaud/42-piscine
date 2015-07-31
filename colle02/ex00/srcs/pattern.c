/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 14:12:09 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/26 18:30:34 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		get_width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		get_height(char *str)
{
	int i;
	int count;

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

int		wich_colle(char *str, int w, int h)
{
	int	ret;

	if (str[0] == 'o')
		ret = check_for_colle00(str, w, h);
	else if (str[0] == '/')
		ret = check_for_colle01(str, w, h);
	else if (str[0] == 'A')
		ret = check_for_colle02_to_04(str, w, h);
	else
		ret = -1;
	return (ret);
}
