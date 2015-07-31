/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 10:06:25 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/13 10:14:32 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int i;
	int tmp;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	i = 1;
	tmp = nb;
	while (i != power)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}
