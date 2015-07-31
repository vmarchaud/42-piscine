/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 13:59:43 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 21:12:33 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int size, char **args)
{
	int		i;
	t_list	*tmp;
	t_list	*elem;
	t_list	*first;

	i = size;
	while (i != 0)
	{
		elem = ft_create_elem(args[i]);
		if (i == size)
			first = elem;
		if (i != 1)
			elem->next = tmp;
		tmp = elem;
		i--;
	}
	return (first);
}
