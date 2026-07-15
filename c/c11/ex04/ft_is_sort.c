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
	int	tab[5] = {9, 9, 5, 5, 1};
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
	int	comp;

	i = 0;
	result = 0;
	comp = 0;
	while (i < length - 1)
	{
		if (comp == 0 && f(tab[i], tab[i + 1]) != 0)
			comp = f(tab[i], tab[i + 1]);
		if (comp != 0 && f(tab[i], tab[i + 1]) != 0 
			&& f(tab[i], tab[i + 1]) != comp)
				return (0);
		i++;
	}
	return (1);
}

int	ft_cmp(int num1, int num2)
{
	int	result;
	
	result = 0;
	if (num1 > num2)
		result = 1;
	else if (num1 == num2)
		result = 0;
	else if (num1 < num2)
		result = -1;
	return (result);
}
