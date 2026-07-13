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

#include <stdio.h>
#include <stdlib.h>


int	*ft_map(int *tab, int length, int (*f)(int));
int	ft_add_1(int num);

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;
	int	*result;
	
	result = malloc(sizeof(int) * (size));
	if (!(result))
		return (-1);
	result = ft_map(tab, size, ft_add_1);
	i = 0;
	while (i < size)
	{
		printf("%d", (result[i]));
		i++;
	}
	free(result);
	return (0);
}

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

int	ft_add_1(int num)
{
	num = num + 1;
	return (num);
}
