/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 14:16:32 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/16 14:19:44 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_ultimate_range(int **range, int min, int main)
{
	int		*ptr;
	int		i;

	if (min >= max)
		return (0);
	i = 0;
	ptr = (int*)malloc(sizeof(max - min));
	while (i != max)
	{
		ptr[i] = min;
		min++;
	}
	return (range);
}
