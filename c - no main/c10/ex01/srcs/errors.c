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

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void	ft_putstr(char *str, int outp);
int		ft_strcmp(char *av);

int	ft_error(int errnum, char **av, int i)
{
	ft_putstr(av[0], 2);
	ft_putstr(": ", 2);
	if (!ft_strcmp(av[i]))
	{
		ft_putstr("'", 2);
		ft_putstr(av[i], 2);
		ft_putstr("'", 2);
	}
	else
		ft_putstr(av[i], 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errnum), 2);
	ft_putstr("\n", 2);
	return (-1);
}
