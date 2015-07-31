/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 16:10:55 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 18:08:38 by lcuzzuco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int				ft_strlen(char *str)
{
	int				i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

unsigned int	get_width(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void			ft_putstr(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
