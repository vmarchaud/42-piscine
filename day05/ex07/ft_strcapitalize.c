/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 15:21:28 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/14 17:28:23 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;
	int begin;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		begin = i;
		while ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9'))
		{
			if (j == 0 && str[j + begin] >= 'a' && str[j + begin] <= 'z')
				str[j + begin] = str[j + begin] - 32;
			else if (str[j + begin] >= 'A' && str[j + begin] <= 'Z')
				str[j + begin] = str[j + begin] + 32;
			j++;
			i++;
		}
		j = 0;
		i++;
	}
	return (str);
}
