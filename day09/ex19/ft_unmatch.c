/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 12:18:13 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/17 12:29:15 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int lenght)
{
	int i;
	int j;
	int match_count;

	i = 0;
	j = 0;
	match_count = 0;
	while (i < lenght)
	{
		while (j < lenght)
		{
			if (tab[i] == tab[j])
				match_count++;
			j++;
		}
		if (match_count == 2)
			return (i);
		j = 0;
		match_count = 0;
		i++;
	}
	return (0);
}
