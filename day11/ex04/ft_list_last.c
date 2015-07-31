/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 13:55:39 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 19:00:52 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
