/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 15:44:24 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:14:34 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Swaps given numbers in the pointed slots
*/
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 3;
	nbr2 = 4;
	printf("%d, %d\n", nbr1, nbr2);
	ft_swap(&nbr1, &nbr2);
	printf("%d, %d", nbr1, nbr2);
	return (0);
}
