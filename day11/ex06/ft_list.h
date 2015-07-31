/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 09:13:59 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 21:05:15 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);

#endif
