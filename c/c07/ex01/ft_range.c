/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_range.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 09:33:33 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 11:52:21 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int		min;
	int		max;
	int		index;
	int	*range;

	min = 3;
	max = 9;
	index = - 1;
	range = ft_range(min, max);
	if (range == NULL)
		return (0);
	while (range[index] <= (max - min + 1))
	{
		index++;
		printf("%d", range[index]);
	}
	return (0);
}

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

	if (min >= max)
		return (NULL);
	range = malloc(max - min);
	if (range == 0)
		return (NULL);
	index = - 1;
	while (min < max)
	{
		index++;
		range[index] = min;
		min++;
	}
	return (range);
}
