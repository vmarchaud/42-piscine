/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 13:46:48 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/26 18:35:15 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# define BUFFER_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*read_stdin(void);
int		wich_colle(char *str, int w, int h);
int		check_for_colle00(char *str, int w, int h);
int		check_for_colle01(char *str, int w, int h);
int		check_for_colle02(char *str, int w, int h);
int		check_for_colle03(char *str, int w, int h);
int		check_for_colle04(char *str, int w, int h);
int		check_for_colle02_to_04(char *str, int w, int h);
int		get_width(char *str);
int		get_height(char *str);
int		wich_colle(char *str, int w, int h);
void	ft_putnbr(int nb);
void	ft_putresult(char *str, int w, int h);
#endif
