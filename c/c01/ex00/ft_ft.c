/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ft.c                                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 12:36:14 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:09:27 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
pointer setting value to '42'
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	number;

	ft_ft(&number);
	printf("%d", number);
	return (0);
}
