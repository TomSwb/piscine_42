/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 11:52:42 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 12:31:44 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Return the square root of num
*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
