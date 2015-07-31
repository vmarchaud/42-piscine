/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 11:22:26 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 18:33:16 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

int				is_valid_operator(char *str)
{
	if (str[0] != '\0' &&
			(str[0] == '+' || str[0] == '-' || str[0] == '/' ||
				str[0] == '*' || str[0] == '%'))
		return (1);
	else
		return (0);
}

int				calculate(int first, char ope, int second)
{
	if (ope == '+')
		return (first + second);
	else if (ope == '-')
		return (first - second);
	else if (ope == '*')
		return (first * second);
	else if (ope == '/')
		return (f[3](first, second));
	else if (ope == '%')
		return (f[4](first, second));
	else
		return (0);
}

int				operation_is_valid(char ope, int second)
{
	if (ope == '/' && second == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (ope == '%' && second == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
		return (1);
}


int				main(int size, char **args)
{
	int first;
	int second;

	if (size != 4)
		return (0);
	if (!is_valid_operator(args[2]))
	{
		ft_putstr("0\n");
		return (0);
	}
	if (ft_str_is_alpha(args[1]) || ft_str_is_alpha(args[3]))
	{
		ft_putstr("0\n");
		return (0);
	}
	first = ft_atoi(args[1]);
	second = ft_atoi(args[3]);
	if (!operation_is_valid(args[2][0], second))
		return (0);
	ft_putnbr(calculate(first, args[2][0], second));
	ft_putchar('\n');
	return (0);
}
