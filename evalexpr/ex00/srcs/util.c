/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 15:12:52 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 23:00:59 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "util.h"

int		get_prior_parenthese(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			count++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
		{
			count--;
			if (count == 0)
				return (i);
		}
		i++;
	}
	return (0)
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		write(1, &(nb + '0'), 1);
	}
}

int		is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int total;
	int i;
	int nega;

	i = 0;
	total = 0;
	nega = 0;
	while ((str[i] < '0' && str[i] > '9') && str[i] != '-' && str[i] != '+')
		i++;
	if (str[i] == '-')
		nega = 1;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10;
		total = total + ((int)str[i] - '0');
		i++;
	}
	if (nega)
		total = -total;
	return (total);
}

void	remove_space(char *src)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(src));
	while (src[i])
	{
		if (src[i] != ' ')
			str[i] = src[i];
		i++;
	}
	*src = *str;
	free(str);
}
