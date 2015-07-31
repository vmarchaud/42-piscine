/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 10:48:05 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/20 13:09:22 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"
# define SUCCESS 1
# define TRUE 1
# define FALSE 0
# include <unistd.h>
# define EVEN(x) (x % 2 ? TRUE : FALSE)

typedef int		t_bool;
#endif
