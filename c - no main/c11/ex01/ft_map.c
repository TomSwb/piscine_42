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

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	while (i < length)
	{
		result = f(tab[i]);
		i++;
	}
	return (result);
}
