/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 09:31:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/30 09:55:25 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Reverse the array
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = (size - 1);
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
