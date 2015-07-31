/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 16:15:30 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/23 11:22:10 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# define BUFFER_SIZE 4096
void	ft_putchar(int out, char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
void	ft_swap(int *a, int *b);
void	ft_puterror(char *str);
#endif
