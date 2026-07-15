/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:08:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 09:22:54 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_solver(t_map *map)
{
	t_solved	sol;
	int			i;

	sol.max_size = 0;
	sol.max_i = 0;
	sol.max_j = 0;
	sol.dp = ft_allocate_sol_grid(sol.dp, map->rows, map->cols);
	if (sol.dp == NULL)
		return (1);
	if (ft_init_rows(&sol, &map))
		return (1);
	if (ft_init_cols(&sol, &map))
		return (1);
	if (ft_check_map(&map, &sol))
		return (1);
	if (ft_solve_map(&map, &sol))
		return (1);
	i = 0;
	while (i < map->rows)
	{
		free(sol.dp[i]);
		i++;
	}
	free(sol.dp);
	return (0);
}

int	ft_check_map(t_map *map, t_solved *sol)
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
				sol->dp[i][j] = ft_smaller_of3(sol->dp[i - 1][j],
						sol->dp[i][j - 1], sol->dp[i -1][j - 1]) + 1;
				if (sol->dp[i][j] > sol->max_size)
				{
					sol->max_size = sol->dp[i][j];
					sol->max_i = i;
					sol->max_j = j;
				}
			}
			else
				sol->dp[i][j] = 0;
		}
	}
	return (1);
}

int	ft_solve_map(t_map *map, t_solved *sol)
{
	int	i;
	int	j;

	i = sol->max_i - sol->max_size + 1;
	while (i <= sol->max_i)
	{
		j = sol->max_j - sol->max_size + 1;
		while (j <= sol->max_j)
		{
			map->grid[i][j] = map->full;
			j++;
		}
		i++;
	}
	return (0);
}
