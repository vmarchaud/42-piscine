/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 16:15:30 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/22 16:33:15 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);
int		ft_atoi(char *str);
int		ft_str_is_alpha(char *str);
int		ft_is_numeric(char *str);
int		sub(int i, int j);
int		add(int i, int j);
int		div(int i, int j);
int		mod(int i, int j);
int		multiply(int i, int j);

#endif
