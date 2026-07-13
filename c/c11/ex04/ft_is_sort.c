/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_sort.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 08:09:13 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 08:09:15 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));
int	ft_cmp(int num1, int num2);

int	main(void)
{
	int	tab[5] = {1, 2, 5, 4, 9};
	int	length = 5;
	
	printf("%d", ft_is_sort(tab, length, ft_cmp));
	return (0);
}

/*
Returns 1 if the given array is sort, or zero if not
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	result;
	
	i = 0;
	result = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			result++;
		i++;
	}
	if (result == 0)
		return (1);
	else
		return (0);
}

int	ft_cmp(int num1, int num2)
{
	int	result;
	
	result = 0;
	if (num1 > num2)
		result = num1 - num2;
	else if (num1 == num2)
		result = 0;
	else if (num1 < num2)
		result = num1 - num2;
	return (result);
}
