/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 13:23:02 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/16 14:15:39 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int main)
{
	int		*ptr;
	int		i;

	if (min >= max)
		return (0);
	i = 0;
	ptr = (int*)malloc(sizeof(max - min));
	while (i != max)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
