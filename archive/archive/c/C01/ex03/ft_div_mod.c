/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 16:12:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:16:50 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
/*
Division of given int and placement in given pointed slot
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	div;
	int	remain;

	ft_div_mod(10, 2, &div, &remain);
	printf("%d, %d", div, remain);
	return (0);
}
*/
