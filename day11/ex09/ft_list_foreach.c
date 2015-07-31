/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 12:59:08 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/28 17:54:22 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*tmp;

	tmp = begin_list;
	while (tmp->next != NULL)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}

ft_list_foreach(premierelement, &lol);
ft_list_foreach(premierlem, &lal);

void	lol(void p*)
{
	*p = *p / 3;
}

void lal(void *)
{
	*p = *p + 3;
}
