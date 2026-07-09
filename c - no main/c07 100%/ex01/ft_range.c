/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_range.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 09:33:33 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 11:13:49 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns an int array including all the value present in the given min max
range, min inclusive, max exclusive, storing the data in the heap and
protecting it using malloc.
*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (size));
	if (range == NULL)
		return (0);
	index = 0;
	while (index < size)
	{
		range[index] = min++;
		index++;
	}
	return (range);
}
