/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 16:15:30 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/25 19:33:57 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		is_numeric(char str);
void	remove_space(char *str);

#endif
