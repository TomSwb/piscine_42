/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_any.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 08:00:37 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 08:00:39 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

/*
Passes each entry of the array through a given funciton and return 1 if 
the given functions returns 1 for at least 1 entry or 0 if none returns 1
*/
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
