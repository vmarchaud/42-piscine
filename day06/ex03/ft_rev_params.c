/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 14:12:11 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/15 15:12:36 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int size, char **args)
{
	int i;
	int j;

	i = size - 1;
	j = 0;
	while (i != 0)
	{
		while ((args[i][j] >= 'a' && args[i][j] <= 'z') ||
				(args[i][j] >= 'A' && args[i][j] <= 'Z') ||
					(args[i][j] >= '0' && args[i][j] <= '9'))
		{
			ft_putchar(args[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i--;
	}
}
