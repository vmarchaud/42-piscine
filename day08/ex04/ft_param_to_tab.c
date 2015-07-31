/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 13:42:49 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/21 23:22:46 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		src_size;
	int		i;

	i = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	string = (char*)malloc(sizeof(char) * src_size);
	while (i < src_size)
	{
		string[i] = src[i];
		i++;
	}
	string[src_size] = '\0';
	return (string);
}

struct	s_stock_par		*ft_param_to_tab(int size, char **args)
{
	struct	s_stock_par *tab;
	int i;

	tab = (struct s_stock_par*)malloc(sizeof(tab) * size);
	i = 0;
	while (i < size)
	{
		tab[i].size_param = ft_strlen(args[i]);
		tab[i].str = args[i];
		tab[i].copy = ft_strdup(args[i]);
		tab[i].tab = ft_split_whitespaces(args[i]);
		i++;
	}
	tab[i].str = "\0";
	return (tab);
}
