/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 11:22:26 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 23:00:55 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

int				calculate(int first, char ope, int second)
{
	if (ope == '+')
		return (first + second);
	else if (ope == '-')
		return (first - second);
	else if (ope == '*')
		return (first * second);
	else if (ope == '/')
		return (first / second);
	else if (ope == '%')
		return (first % second);
	else
		return (0);
}

int				find_operation_number(char *str, int index, int way)
{
	int j;
	char *tmp;

	j = 0;
	tmp = malloc(sizeof(tmp));
	while (is_numeric(str[index]))
	{
		tmp[j] = str[index];
		j++;
		if (way == 1)
			index++;
		else
			index--;
	}
	return (ft_atoi(tmp));
}

int				find_prio_operation(char *str)
{
	int		i;
	int		begin;
	int		count;
	char	*tmp;
	
	i = 0;
	begin = get_prior_parenthese(str);
	while ()
	


}

int				main(int size, char **args)
{
	int first;
	int second;

	if (size != 4)
		return (0);
	first = ft_atoi(args[1]);
	second = ft_atoi(args[3]);
	ft_putnbr(calculate(first, args[2][0], second));
	ft_putchar('\n');
	return (0);
}
