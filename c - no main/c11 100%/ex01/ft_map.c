/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_map.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 07:56:24 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 07:56:26 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
Applies a given function to each element of the int array and return a new 
array with the modified valued
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	result = malloc(sizeof(int) * (length));
	if (!(result))
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
