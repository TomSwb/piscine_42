/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   solver_helpers.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 19:12:02 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/14 19:12:03 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_smaller_of3(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b < c)
			return (b);
		else
			reutrn (c);
	}
}

void	fr_free_grid(t_map *map)
{
	int	i;
	
	if (map->grid != NULL)
	{
		i = 0;
		while (i < map->rows)
		{
			free(map->grid[i];
			i++;
		}
		free(map->grid);
		map->grid = NULL;
	]
}
