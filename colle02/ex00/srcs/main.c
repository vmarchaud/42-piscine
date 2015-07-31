/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 10:36:25 by sganon            #+#    #+#             */
/*   Updated: 2015/07/26 18:40:35 by sganon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(void)
{
	char	*str;
	int		w;
	int		h;

	str = read_stdin();
	w = get_width(str);
	h = get_height(str);
	ft_putresult(str, w, h);
}
