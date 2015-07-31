/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 12:40:39 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 13:11:05 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (0);
	if (cmpf(data_ref, root->item) < 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else if (cmpf(data_ref, root->item) == 0)
		return (root);
	else if (cmpf(data_ref, root->item) > 0)
		return (btree_search_item(root->right, data_ref, cmpf));
	else
		return (0);
}
