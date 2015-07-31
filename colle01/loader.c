/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 11:47:12 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/19 21:53:46 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#import "stdlib.h"

int		*load_from_args(int size, char **args)
{
	int *tab;
	int i;
	int j;
	int k;

	i = 1;
	j = 0;
	k = 0;
	tab = (int*)malloc(sizeof(int) * 81);
	while (i < size)
	{
		while (args[i][j] != '\0')
		{
			if (args[i][j] == '.')
				tab[k] = 0 + '0';
			else
				tab[k] = ((int)(args[i][j]));
			k++;
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
