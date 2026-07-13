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
