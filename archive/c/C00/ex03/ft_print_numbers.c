/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_numbers.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 09:36:04 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/24 10:29:39 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
writes character
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
writes digits in ascending order
*/
void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
