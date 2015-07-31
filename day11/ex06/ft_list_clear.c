/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 21:09:16 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 18:29:44 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	if (begin_list == NULL)
		return ;
	while (tmp != NULL)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		free(tmp);
	}
}
