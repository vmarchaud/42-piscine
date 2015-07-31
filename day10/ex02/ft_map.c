/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 10:49:08 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/21 10:52:37 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
