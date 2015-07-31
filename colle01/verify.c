/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 17:29:43 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/19 21:54:31 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_putstr(char *c);
int		ft_unmatch(char *str, int size);
int		resolve(int *tab, int index, int way);
void	print_solution(int *tab);

int		verify_solution(int *tab)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[0 + 9 * i] + tab[1 + 9 * i] + tab[2 + 9 * i] + tab[3 + 9 * i] +
			tab[4 + 9 * i] + tab[5 + 9 * i] + tab[6 + 9 * i] + tab[7 + 9 * i] +
				tab[8 + 9 * i] - 432 == 45)
			i++;
		else
			return (0);
	}
	return (1);
}

int		verify_args(int size, char **args)
{
	int i;

	if (size != 10)
		return (0);
	i = 1;
	while (i != size)
	{
		if (ft_strlen(args[i]) != 9 || ft_unmatch(args[i], 9))
			return (0);
		else
			i++;
	}
	return (1);
}

int		verify_other_solution(int *src, int *cmp)
{
	int i;

	i = 0;
	resolve(cmp, 81, -1);
	while (i < 81)
	{
		if (src[i] != cmp[i])
			return (0);
		i++;
	}
	return (1);
}
