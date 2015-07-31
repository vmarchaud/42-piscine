/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 12:44:57 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 20:32:10 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	if (begin_list == NULL)
		return (0);
	i = 0;
	while (i != nbr)
	{
		if (tmp->next == NULL)
			return (0);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
