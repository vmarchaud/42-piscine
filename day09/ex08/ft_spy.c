/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 01:03:23 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/17 08:26:28 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*to_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		is_same_word(char *src, char *find, int powers)
{
	int i;
	int j;
	int find_size;

	i = 0;
	j = 0;
	find_size = 0;
	while (find[find_size] != '\0')
		find_size++;
	while (src[i] != '\0' && find[j] != '\0')
	{
		if (src[i] == find[j] || (powers == 1 && j == 0 && find[j] == 'P'))
		{
			i++;
			j++;
			if (j == find_size)
				return (1);
		}
		else if (src[i] == ' ')
			i++;
		else
			return (0);
	}
	return (0);
}

int		main(int size, char **args)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (is_same_word(to_lowercase(args[i]), "president", 0) ||
			is_same_word(to_lowercase(args[i]), "attack", 0) ||
				is_same_word(args[i], "Powers", 1))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
