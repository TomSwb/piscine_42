/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_alphabet.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 08:28:44 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 09:22:19 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
write characters
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
loop to write characters/alphabet in ascending order
*/
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
