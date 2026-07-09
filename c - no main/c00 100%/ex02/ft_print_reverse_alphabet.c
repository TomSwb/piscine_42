/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_reverse_alphabet.c                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 09:18:13 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 09:24:15 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
write character
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
print character in reverse alphabetical order
*/
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
