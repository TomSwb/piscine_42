/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:08:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 21:53:41 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_solver(t_map *map)
{
	map->sol->max_size = 0;
	map->sol->max_i = 0;
	map->sol->max_j = 0;
	if (ft_allocate_dp(map))
		return (1);
	if (ft_find_biggest_square(map))
		return (1);
	ft_fill_square(map);
	return (0);
}

int	ft_find_biggest_square(t_map *map)
{
	int	i;
	int	j;

	i = -1;
	while (++i < map->rows)
	{
		j = -1;
		while (++j < map->cols)
		{
			if (map->grid[i][j] == map->obst)
				map->sol->dp[i][j] = 0;
			else if (i == 0 || j == 0)
				map->sol->dp[i][j] = 1;
			else
				map->sol->dp[i][j] = ft_min(map->sol->dp[i - 1][j],
						map->sol->dp[i][j - 1], map->sol->dp[i - 1][j - 1]);
			if (map->sol->dp[i][j] > map->sol->max_size)
			{
				map->sol->max_size = map->sol->dp[i][j];
				map->sol->max_i = i;
				map->sol->max_j = j;
			}
		}
	}
	return (0);
}

void	ft_fill_square(t_map *map)
{
	int	i;
	int	j;

	i = map->sol->max_i - map->sol->max_size + 1;
	while (i <= map->sol->max_i)
	{
		j = map->sol->max_j - map->sol->max_size + 1;
		while (j <= map->sol->max_j)
		{
			map->grid[i][j] = map->full;
			j++;
		}
		i++;
	}
}
