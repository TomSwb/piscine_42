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

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	count;
	int	result;
	
	i = 0;
	count = 0;
	result = 0;
	while (i < length)
	{
		result = f(tab[i], tab[i + 1]);
		if (result < 0)
			count++;
		if (result > 0)
			count--;
		i++;
	}
	if (count == length)
		return (1);
	else
		return (0);
}
