/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/17 13:41:35 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/17 15:57:07 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS 42
# include "string.h"

typedef struct	t_perso	s_perso;

struct			t_perso {
	char				*name;
	float				life;
	int					age;
	int					profession;
};

#endif
