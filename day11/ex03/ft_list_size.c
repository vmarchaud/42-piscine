/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 11:53:45 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 20:32:22 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int			ft_list_size(t_list **begin_list)
{
	int		i;
	t_list	*tmp;

	if (begin_list == NULL)
		return (0);
	i = 0;
	tmp = *begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i + 1);
}
