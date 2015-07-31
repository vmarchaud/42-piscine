/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 21:28:54 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/11 21:50:19 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int k;
	int *tmp;

	i = 0;
	j = 0;
	k = 0;
	*tmp = *tab; 
	while (i < size)
	{
		while (j < size)
		{
			if (i > tab[j]) 
			{
				while(k < size)
				{
					tmp[k + 1] = tmp[k];
					k++;
				}
				tmp[0] = i;

			}
			j++;
		}
		i++;
	}
}

int main()
{
	int yolo[4]  = {8, 9, 5, 7};
	int *ptr;

	ptr = &(yolo[0]);
	ft_sort_integer_table(ptr, 4);
}


