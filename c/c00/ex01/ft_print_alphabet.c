/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_alphabet.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 08:28:44 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/24 10:23:36 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
loop to write characters/alphabet in ascending order
*/
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
