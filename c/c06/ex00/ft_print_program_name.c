/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_program_name.c                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 15:06:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 15:30:24 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns the name of the program using the amount and character stocked in argv
Having an int argc is mandatory but not needed therefore we void it.
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cln;

	cln = 0;
	(void) argc;
	while (argv[0][cln])
	{
		write(1, &argv[0][cln], 1);
		cln++;
	}
	write(1, "\n", 1);
	return (0);
}
