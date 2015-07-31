/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 11:56:38 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/13 16:12:38 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void build_top(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		i++;
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void build_middle(int y, int x)
{
	int current_l;
	int current_c;

	current_l = 0;
	while (current_l < x)
	{
		current_c = 0;
		ft_putchar('\n');
		while (current_c < y)
		{
			current_c++;
			if (current_c == 1)
				ft_putchar('B');
			else if (current_c == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		current_l++;
	}
}

void build_bottom(int x)
{
	int i;

	i = 0;
	ft_putchar('\n');
	while (i < x)
	{
		i++;
		if (i == 1)
		{
			ft_putchar('A');
		}
		else if (i == x)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

void colle(int x, int y)
{
	if (y == 1)
		build_top(x);
	else if (x == 2)
	{
		build_top(x);
		build_bottom(x);
	}
	else
	{
		build_top(x);
		build_middle(x, y - 2);
		build_bottom(x);
	}
	ft_putchar('\n');
}
