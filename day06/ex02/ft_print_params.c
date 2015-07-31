/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 10:47:43 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/15 15:36:31 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int size, char **args)
{
	int i;
	int n;
	int j;

	i = 1;
	n = 0;
	j = 0;
	while (i != size)
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
		i++;
	}
}
