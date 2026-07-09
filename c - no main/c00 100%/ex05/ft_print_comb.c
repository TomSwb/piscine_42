/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_comb.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 09:19:42 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 11:37:21 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
return all possible combination of 3 digits with no duplicates 
*/

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0';
	while (nbr1 <= '7')
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= '8')
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= '9')
			{
				write(1, &nbr1, 1);
				write(1, &nbr2, 1);
				write(1, &nbr3, 1);
				if (nbr1 != '7')
					write(1, ", ", 2);
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}
