/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 08:40:55 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 08:55:37 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns the nb calculated to the given power
*/

int	ft_iterative_power(int nb, int power)
{
	int	ognb;

	ognb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * ognb;
		power--;
	}
	return (nb);
}
