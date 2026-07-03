/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 18:38:04 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 18:59:32 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	ft_putnbr(42548);
	return (0);
}

/*
Prints a number using write converting a int in char and using 
recursivity to print leftmost digit first
*/
void	ft_putnbr(int nb)
{
	long	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		write(1, "-", 1);
		nblong = -nblong;
	}
	if (nblong >= 10)
	{
		ft_putnbr(nblong / 10);
		nblong = nblong % 10;
	}
	nblong = nblong + '0';
	write(1, &nblong, 1);
}

void	ft_putchar(char c)
{
	write(1, &"0123456789"[nblong % 10], 1);
}

void	ft_putnbr(int nb)
{
	long	nblong;

	nblong = nb;
	if (nblong < 0)
	{
		write(1, "-", 1);
		nblong = -nblong;
	}
	if (nblong >= 10)
		ft_putnbr(nblong / 10);
	write(1, &"0123456789"[nblong % 10], 1);
