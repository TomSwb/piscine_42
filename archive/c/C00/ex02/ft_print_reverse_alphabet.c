/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_reverse_alphabet.c                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 09:18:13 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/24 10:24:09 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
print character in reverse alphabetical order
*/
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
