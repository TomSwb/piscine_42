/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_foreach.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 07:49:19 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 07:51:16 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

/*
Passes each elements of tab through the given function
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
