/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 10:55:19 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/24 11:03:04 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree*)malloc(sizeof(tmp));
	tmp->item = item;
	tmp->left = 0;
	tmp->right = 0;
	return (tmp);
}
