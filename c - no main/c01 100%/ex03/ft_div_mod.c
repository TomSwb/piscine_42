/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 16:12:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:16:50 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Division of given int and placement in given pointed slot
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
