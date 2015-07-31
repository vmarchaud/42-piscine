/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 21:11:55 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/17 09:54:15 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_rot42(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (j < 42)
		{
			printf("%d : %c -> %c && %d\n", j, str[i], str[i] + 1, str[i] + 2);
			if (str[i] + 1 > '~')
				str[i] = ' ';
			str[i] = str[i] + 1;
			j++;
		}
		i++;
	}
	return (str);
}

int			main(void)
{
	char	*str;
	str = "aaaaaaaaaa";
	printf("%s", ft_rot42(str));
}

