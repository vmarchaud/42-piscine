/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 15:12:52 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 11:17:26 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "util.h"

void	ft_putchar(int out, char c)
{
	write(out, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(1, str[i]);
		i++;
	}
}

void	ft_puterror(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(2, str[i]);
		i++;
	}
}
