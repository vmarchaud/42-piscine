/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_column.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsteffen <vsteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 18:49:48 by vsteffen          #+#    #+#             */
/*   Updated: 2015/07/19 16:03:48 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_begin_case(int square)
{
	if (square <= 2)
		return (square * 3);
	else if (square > 2 && square <= 5)
		return ((square - 3) * 3 + 27);
	else if (square > 5 && square <= 8)
		return ((square - 3) * 3 + 54);
	return (0);
}

int		get_square_from_index(int index)
{
	int line;
	int column;

	line = index / 9;
	column = index % 9;
	if (line < 3)
		return (column / 3);
	else if (line > 5)
		return (column / 3 + 6);
	else
		return (column / 3 + 3);
}

int		check_column(int *tab, int column, int nb)
{
	int i;
	int index;

	i = 0;
	index = column;
	while (i < 9)
	{
		if (tab[index] == nb + '0')
			return (0);
		index += 9;
		i++;
	}
	return (1);
}

int		check_line(int *tab, int line, int nb)
{
	int i;
	int index;

	i = 0;
	index = line * 9;
	while (i < 9)
	{
		if (tab[index] == nb + '0')
			return (0);
		index++;
		i++;
	}
	return (1);
}

int		check_square(int *tab, int square, int nb)
{
	int i;
	int begin;

	i = 1;
	begin = get_begin_case(square);
	while (i <= 9)
	{
		if (tab[begin] == nb + '0')
			return (0);
		if (i % 3 == 0)
			begin += 7;
		else
			begin++;
		i++;
	}
	return (1);
}
