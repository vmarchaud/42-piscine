/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 11:38:06 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 18:49:43 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*tmp;

	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
}
