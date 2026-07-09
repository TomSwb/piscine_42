/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 09:26:43 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 11:53:01 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Writes a char
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Returns a write of all the numerical values given
by calling itself with the given nbr divided by ten
until the og nbr is brought down to 1 decimal then prints that decimal
and continues until all og decimals are print
Also adds a negation if og nbr is neg
*/
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + 48);
}
