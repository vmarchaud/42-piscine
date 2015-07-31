/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmarchau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 09:59:36 by vmarchau          #+#    #+#             */
/*   Updated: 2015/07/10 23:00:29 by vmarchau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
}
