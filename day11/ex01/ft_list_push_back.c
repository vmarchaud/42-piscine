/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 09:29:41 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 18:50:05 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	int		i;
	t_list	*tmp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = *begin_list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}
