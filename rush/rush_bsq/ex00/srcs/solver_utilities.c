/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 08:17:04 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 08:45:00 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_init_rows(t_solved *solution, t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		if (map->grid[i][0] == map->empty)
			solution->dp[i][0] = map->grid[i][0];
		if (solution->dp[i][0] > solution->max_size)
		{
			solution->max_size = solution->dp[i][0];
			solution->max_i = i;
			solution->max_j = 0;
		}
		i++;
	}
	return (0);
}

int	ft_init_cols(t_solved *solution, t_map *map)
{
	int	j;

	j = 0;
	while (j < map->cols)
	{
		if (map->grid[0][j] == map->empty)
			solution->dp[0][j] = map->grid[0][j];
		if (solution->dp[0][j] > solution->max_size)
		{
			solution->max_size = solution->dp[0][j];
			solution->max_i = 0;
			solution->max_j = j;
		}
		j++;
	}
	return (0);
}

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
			free(map->grid[i]);
			i++;
		}
		free(map->grid);
		map->grid = NULL;
	}
}
