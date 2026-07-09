/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 08:14:15 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 08:40:34 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", (ft_iterative_factorial(100)));
	return (0);
}
*/

/*
Iterate in loop to calculate the given nb to its factorial
*/

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	total = nb;
	nb = nb - 1;
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
