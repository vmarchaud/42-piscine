/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 13:02:22 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 21:04:57 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list		*next;
	t_list		*current;

	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = *begin_list;
		*begin_list = current;
		current = next;
	}
}
