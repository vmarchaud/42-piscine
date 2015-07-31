/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 23:34:44 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/10 23:08:34 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}	

	int c;
	int n;

	c = 0;    
	n = nb;

	while (n != 0)
	{
		 n /= 10;
		 c++;
	}
	
	int numberArray[c];
	n = nb;

	while (n != 0)
	{
		ft_putchar(n % 10 + '0');
		n /= 10;
		c++;
	}
}
