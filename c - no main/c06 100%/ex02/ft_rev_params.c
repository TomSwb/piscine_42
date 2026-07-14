/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_params.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 08:34:07 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 08:43:22 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Prints the given arguments in reverse order of entry and 
seperates with a new line
voiding argc to work only with the given table
*/

int	main(int argc, char **argv)
{
	int	lin;
	int	cln;

	(void) argc;
	lin = 1;
	cln = 0;
	while (argv[lin])
		lin++;
	lin--;
	while (lin > 0)
	{
		while (argv[lin][cln])
		{
			write(1, &argv[lin][cln], 1);
			cln++;
		}
		write(1, "\n", 1);
		cln = 0;
		lin--;
	}
}
