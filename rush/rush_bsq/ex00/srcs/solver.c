/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   solver.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 19:08:58 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/14 19:09:00 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	solver(t_map *map)
{
	int	**dp;
	int	max_size;
	int	max_i;
	int	max_j;
	int	i;
	int	j;
	
	max_size = 0;
	max_i = 0;
	max_j = 0;
	dp = ft_allocate_grid(dp, map->rows, map->cols);
	if (dp == NULL)
		return (1);
	while (i < map->rows)
	{
		if (map->grid[i][0] == map->empty)
			dp[i][0] = map->grid[i][0];
		if (dp[i][0] > max_size)
		{
			max_size = dp[i][0];
			max_i = i;
			max_j = 0;
		}
		i++;
	}
	while (j < map->cols)
	{
		if (map->grid[0][j] == map->empty)
			dp[0][j] = map->grid[0][j];
		if (dp[0][j] > max_size)
		{
			max_size = dp[0][j];
			max_i = 0;
			max_j = j;
		}
		j++;
	}
	i = 1;
	while (i < map->rows)
	{
		j = 1;
		while (j < map->cols)
		{
			if (map->grid[i][j] == map->empty)
			{
				dp[i][j] = ft_smaller_of3(dp[i - 1][j], 
					dp[i][j - 1], dp[i -1][j - 1]) + 1;
				if (dp[i][j] > max_size)
				{
					max_size = dp[i][j];
					max_i = i;
					max_j = j;
				}
			}
			else
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
	i = max_i - max_size + 1;
	while (i <= max_i)
	{
		j = max_j - max_size + 1;
		while (j <= max_j)
		{
			map->grid[i][j] = map->full;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < map->row)
	{
		free(dp[i]);
		i++;
	}
	free[dp];
}
