/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 16:48:27 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 16:48:29 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	main(int ac, char **av)
{
	int	result;

	result = 0;
	if (ac != 4)
		return (0);
	else
		result = ft_choose_op(av[1], av[2], av[3]);
	if (result == -1)
		return (-1);
	else
		ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
