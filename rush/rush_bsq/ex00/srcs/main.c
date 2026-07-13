/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 11:44:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/13 11:44:17 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "..includes/ft_lib.h"

int	main(int ac, char **av)
{
	t_map	*map;
	int	i;
	
	if (ac < 2)
		return (-1);
	maps = malloc(sizeof(struct s_map) * (ac);
	if (!(maps)
		return (-1);
	i = 1;
	while (av[i])
	{
		ft_parse_each_file(av[i], maps[i]);
		I++;
	}
	return (0);
}
