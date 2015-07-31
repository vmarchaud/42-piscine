/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 18:03:46 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/16 18:37:27 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	char	*am_pm_1;
	char	*am_pm_2;
	int		second_hour;

	am_pm_1 = hour >= 12 ? "P.M." : "A.M.";
	am_pm_2 = hour + 1 >= 12 ? "P.M." : "A.M.";
	if (hour >= 12)
		hour = hour - 12;
	if (hour == 0)
		hour = 12;
	second_hour = hour + 1 > 12 ? 1 : hour + 1;
	if (am_pm_1[0] == 'P' && hour == 11)
		am_pm_2 = "A.M.";
	printf("%s ", "THE FOLLOWING TAKES PLACE BETWEEN");
	printf("%d.00 %s AND %d.00 %s\n", hour, am_pm_1, second_hour, am_pm_2);
}
