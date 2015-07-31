/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 13:07:20 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/19 21:51:12 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		*load_from_args(int i, char **args);
int		check_column(int *tab, int column, int nb);
int		check_line(int *tab, int line, int nb);
int		check_square(int *tab, int square, int nb);
int		get_square_from_index(int index);
int		verify_solution(int *tab);
int		verify_args(int size, char **args);
int		verify_other_solution(int *src, int *cmp);
int		*tabcpy(int *src);

int		print_error(void)
{
	ft_putstr("Erreur\n");
	return (0);
}

int		resolve(int *tab, int index, int way)
{
	int i;

	if (way == 1)
		i = 1;
	else
		i = 9;
	if ((index == 81 && way == 1) ||
			(index == 0 && way == -1))
		return (1);
	if (tab[index] != '0')
		return (resolve(tab, index + way, way));
	while (i <= 9 && i != 0)
	{
		if (check_column(tab, index % 9, i) &&
				check_line(tab, index / 9, i) &&
					check_square(tab, get_square_from_index(index), i))
		{
			tab[index] = i + '0';
			if (resolve(tab, index + way, way))
				return (1);
		}
		i = i + way;
	}
	tab[index] = '0';
	return (0);
}

void	print_solution(int *tab)
{
	int i;

	i = 0;
	while (i < 81)
	{
		if (i == 0)
		{
		}
		else if (i % 9 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		ft_putchar(tab[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int size, char **args)
{
	int *tab;
	int *cmp;

	if (!verify_args(size, args))
		return (print_error());
	tab = load_from_args(size, args);
	cmp = (int*)malloc(sizeof(int) * 81);
	cmp = tabcpy(tab);
	resolve(tab, 0, 1);
	if (!verify_solution(tab))
		return (print_error());
	if (!verify_other_solution(tab, cmp))
		return (print_error());
	else
		print_solution(tab);
	return (0);
}
