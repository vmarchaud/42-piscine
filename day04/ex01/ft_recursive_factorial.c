/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 09:53:01 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/13 10:06:04 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (nb < 3)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
