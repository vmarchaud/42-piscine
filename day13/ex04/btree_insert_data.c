/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 23:15:40 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 12:39:58 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree		*previous;
	t_btree		*tmp;

	tmp = *root;
	while (tmp != NULL)
	{
		previous = tmp;
		if (cmpf(item, tmp->item) < 0)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}
	if (cmpf(item, previous->item) < 0)
		previous->left = btree_create_node(item);
	else
		previous->right = btree_create_node(item);
}
