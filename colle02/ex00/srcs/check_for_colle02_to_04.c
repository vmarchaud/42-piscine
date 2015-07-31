/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_colle02_to_04.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 20:28:26 by sganon            #+#    #+#             */
/*   Updated: 2015/07/26 18:41:26 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		check_for_colle02_to_04(char *str, int w, int h)
{
	if (check_for_colle02(str, w, h) == 1 || check_for_colle03(str, w, h) == 1
			|| check_for_colle04(str, w, h))
	{
		if (w == 1 && h == 1)
			return (9);
		else if (w == 1)
			return (6);
		else if (h == 1)
			return (7);
		else if (check_for_colle02(str, w, h) == 1)
			return (2);
		else if (check_for_colle03(str, w, h) == 1)
			return (3);
		else if (check_for_colle04(str, w, h) == 1)
			return (4);
		else
			return (-1);
	}
	else
		return (-1);
}
