/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 17:15:21 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:19:09 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
Division and remainder being placed in slots indicated by themselves
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nbr1;
	int	nbr2;

	nbr1 = *a;
	nbr2 = *b;
	*a = nbr1 / nbr2;
	*b = nbr1 % nbr2;
}

int	main(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 10;
	nbr2 = 5;
	ft_ultimate_div_mod(&nbr1, &nbr2);
	printf("%d, %d", nbr1, nbr2);
	return (0);
}
