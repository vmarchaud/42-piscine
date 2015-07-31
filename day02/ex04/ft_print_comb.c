/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 08:36:54 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/10 23:07:17 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 47;
	while (i <= '9')
	{
		j = ++i;
		while (j <= '9')
		{
			k = ++j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k++);
				if (i != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
