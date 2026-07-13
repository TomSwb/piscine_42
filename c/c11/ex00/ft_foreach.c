/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_foreach.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 07:49:19 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 07:51:16 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int num);
void	ft_putchar(char c);

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	length = 5;
	
	ft_foreach(tab, length, ft_putnbr);
//	ft_putnbr(45);
	return (0);
}

/*
Passes each elements of tab through the given function
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	ft_putnbr(int num)
{
	long	nbr;
	
	nbr = num;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	ft_putchar(nbr + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
