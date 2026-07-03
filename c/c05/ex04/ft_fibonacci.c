/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 09:55:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 11:52:07 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%d", (ft_fibonacci(7)));
}
*/

/*
Return the Fibonacci num present at the given index
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)	
		return (1);	
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
