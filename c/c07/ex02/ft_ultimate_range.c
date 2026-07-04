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

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int		min;
	int		max;
	int		size;
	int	*range;

	min = 1;
	max = 1;
	size = ft_ultimate_range(&range, min, max);
	printf("%d\n", size);
//	printf("%d", range[5]);
	free(range);
	return (0);
}

/*
Returns the size of an int array including all the value present 
in the given min max range, min inclusive, max exclusive, 
storing the data in the heap and protecting it using malloc.
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	if (min >= max)
	{
		*range = malloc(0);
		return (0);
	}
	*range = malloc(max - min);
	if (range == NULL)
		return (-1);
	index = -1;
	while (min < max)
	{
		index++;
		(*range)[index] = min;
		min++;
	}
	return (index + 1);
}
