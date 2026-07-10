/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 19:00:41 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 19:00:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	main(int ac, char *av[])
{
	int		i;
	int		file;

	if (ac > 1)
	{
		i = 3;
		while (i < ac)
		{
			file = open(av[i], 0);
			if (file == -1)
				ft_error_open(av[i]);
			else
				ft_pass_to_display(av, ac, i, file);
			i++;
		}
	}
	else if (ac == 1)
		ft_print(av, 1);
	return (0);
}

int	ft_pass_to_display(char **av, int ac, int i, int file)
{
	long		ignore;

	ignore = (ft_count_total_size(av, i) - ft_atoi(av[2]));
	if (ignore <= 0)
		ft_error_nbr(av[i]);
	ft_print_names(ac, av, i);
	ft_display_file(av, file, i, ignore);
	if (i < ac -1)
		ft_putstr("\n", 1);
	close(file);
	if (file == -1)
		return (-1);
	return (0);
}
