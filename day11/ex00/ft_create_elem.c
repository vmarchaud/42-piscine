/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 09:18:23 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 11:06:51 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(elem));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
