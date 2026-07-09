/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 08:27:12 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 08:40:10 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Return the factorial result of nb using recursivity
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
