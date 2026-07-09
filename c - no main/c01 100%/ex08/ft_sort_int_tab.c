/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 13:44:18 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/30 13:44:27 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Sort the array
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i != (size - 1))
	{
		while (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		i++;
	}
}
