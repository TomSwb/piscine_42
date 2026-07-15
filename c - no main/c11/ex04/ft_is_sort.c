/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 08:09:13 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 09:36:37 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
