/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_params.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 15:31:35 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 16:21:15 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Prints the given arguments in order of entry and seperates with a new line
voiding argc to work only with the given table
*/

int	main(int argc, char **argv)
{
	int	lin;
	int	cln;

	lin = 1;
	cln = 0;
	(void) argc;
	while (argv[lin])
	{
		while (argv[lin][cln])
		{
			write(1, &argv[lin][cln], 1);
			cln++;
		}
		cln = 0;
		lin++;
		write(1, "\n", 1);
	}
	return (0);
}
