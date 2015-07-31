/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 07:38:26 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/11 16:02:19 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tmp;

	while (str[i] != '\0')
	{
		size++;
	}
	if (str)
	{
		i = 0;
		while (i < size / 2)
		{
			tmp = str[i];
			str[i] = str[size - i - 1];
			str[size - i - 1] = tmp;
			i++;
		}
	}
}
