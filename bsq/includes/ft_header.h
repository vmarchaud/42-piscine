/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 16:20:05 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/30 22:52:02 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define BUFFER_SIZE 5000000
# include <stdlib.h>

typedef	struct		s_map
{
	char			square;
	char			obstacle;
	char			empty;
	unsigned int	square_size;
	unsigned int	square_index;
	unsigned int	width;
	unsigned int	height;
	unsigned int	*tab;
	char			*str;
	unsigned int	size;
}					t_map;

void				ft_putchar(char c);
void				ft_putnbr(int i);
void				ft_putstr(char *str);
unsigned int		get_width(char *str);
int					ft_strlen(char *str);
int					ft_atoi(char *str);
unsigned int		get_height(char *str);
char				*ft_strcat(char *dest, char *src);
int					is_in_square(unsigned int index, t_map *map);

int					mapping(t_map *map);
int					prepare(t_map *map);
int					verify_map(t_map *map);
int					display_map(t_map *map);

int					read_file(char *path, t_map *map, int in);
int					open_file(char *path);
#endif
