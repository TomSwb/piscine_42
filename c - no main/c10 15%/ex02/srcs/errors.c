/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_error.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 19:27:28 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 19:27:30 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_error_open(char *av)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr("cannot open '", 2);
	ft_putstr(av, 2);
	ft_putstr("' for reading: No such file or directory", 2);
	ft_putstr("\n", 2);
}

void	ft_error_read(char *av)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr("error reading '", 2);
	ft_putstr(av, 2);
	ft_putstr(": is a directory", 2);
	ft_putstr("\n", 2);
}

void	ft_error_nbr(char *av)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr("invalid number of bytes", 2);
	ft_putstr(": '", 2);
	ft_putstr(av, 2);
	ft_putstr("'\n", 2);
}

void	ft_error_arg(char *av)
{
	ft_putstr("ft_tail: ", 2);
	ft_putstr("invalid option -- '", 2);
	ft_putstr(av, 2);
	ft_putstr("'\n", 2);
}
