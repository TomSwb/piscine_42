/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_range.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 11:16:29 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 11:16:33 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns the size of an int array including all the value present 
in the given min max range, min inclusive, max exclusive, 
storing the data in the heap and protecting it using malloc.
*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size + 1);
	if (*range == NULL)
		return (-1);
	index = 0;
	while (index < size)
	{
		(*range)[index] = min++;
		index++;
	}
	return (size);
}
