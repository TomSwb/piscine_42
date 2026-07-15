/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:08:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 15:09:32 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_solver(t_map *map)
{
	int			i;

	map->sol->max_size = 0;
	map->sol->max_i = 0;
	map->sol->max_j = 0;
	if (ft_allocate_dp(map))	
		return (1);
	if (ft_init_rows(map))
		return (1);
	if (ft_init_cols(map))
		return (1);
	if (ft_check_map(map))
		return (1);
	if (ft_solve_map(map))
		return (1);
	i = 0;
	while (i < map->rows)
	{
		free(map->sol->dp[i]);
		i++;
	}
	free(map->sol->dp);
	return (0);
}

int	ft_check_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (++i < map->rows)
	{
		j = 0;
		while (++j < map->cols)
		{
			if (map->grid[i][j] == map->empty)
			{
				map->sol->dp[i][j] = ft_smaller_of3(map->sol->dp[i - 1][j], map->sol->dp[i][j
						- 1], map->sol->dp[i - 1][j - 1]) + 1;
				if (map->sol->dp[i][j] > map->sol->max_size)
				{
					map->sol->max_size = map->sol->dp[i][j];
					map->sol->max_i = i;
					map->sol->max_j = j;
				}
			}
			else
				map->sol->dp[i][j] = 0;
		}
	}
	return (1);
}

int	ft_solve_map(t_map *map)
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
	return (0);
}
