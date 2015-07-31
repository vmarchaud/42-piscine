/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 18:13:55 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/15 18:16:20 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[i] && i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
