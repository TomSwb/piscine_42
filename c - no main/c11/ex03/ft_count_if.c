/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_count_if.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 08:04:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 08:04:30 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

/*
Returns a count of how many time the given function returned something else
than 0.
*/
int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
