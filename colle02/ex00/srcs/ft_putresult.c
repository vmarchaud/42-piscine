/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putresult.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 17:22:37 by sganon            #+#    #+#             */
/*   Updated: 2015/07/26 23:34:05 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_put_regular_result(int w, int h, int i)
{
	ft_putstr("[colle0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(w);
	ft_putstr("] [");
	ft_putnbr(h);
	ft_putstr("]");
}

void	ft_put_square(int x, int y)
{
	ft_putstr(" || [carre] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_put_rectangle(int x, int y)
{
	ft_putstr(" || [rectangle] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	ft_put_special_result(char *str, int w, int h)
{
	int i;

	i = 2;
	if (wich_colle(str, w, h) == 7)
		i = 3;
	while (i <= 4)
	{
		ft_put_regular_result(w, h, i);
		if (i != 4)
			ft_putstr(" || ");
		if (wich_colle(str, w, h) == 6)
			i = i + 2;
		else if (wich_colle(str, w, h) > 6)
			i++;
	}
}

void	ft_putresult(char *str, int w, int h)
{
	if (wich_colle(str, w, h) == -1)
		ft_putstr("aucune\n");
	else if (wich_colle(str, w, h) >= 0 && wich_colle(str, w, h) <= 4)
	{
		ft_put_regular_result(w, h, wich_colle(str, w, h));
		if (w == h && w > 1 && h > 1)
			ft_put_square(w, h);
		else if (w > h && w > 1 && h > 1)
			ft_put_rectangle(w, h);
		ft_putchar('\n');
	}
	else if (wich_colle(str, w, h) >= 6 && wich_colle(str, w, h) <= 9)
	{
		ft_put_special_result(str, w, h);
		if (w == h && w > 1 && h > 1)
			ft_put_square(w, h);
		else if (w > h && w > 1 && h > 1)
			ft_put_rectangle(w, h);
		ft_putchar('\n');
	}
}
