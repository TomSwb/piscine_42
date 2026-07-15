/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 08:17:04 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 15:10:50 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_allocate_dp(t_map *map)
{
	int	i;

	map->sol->dp = (int **)malloc(sizeof(int *) * (map->rows + 1));
	if (map->sol->dp == NULL)
		return (1);
	i = 0;
	while (i < map->rows)
	{
		map->sol->dp[i] = (int *)malloc(sizeof(int) * (map->cols + 1));
		if (map->sol->dp[i] == NULL)
		{
			while (i > 0)
			{
				free(map->sol->dp[i - 1]);
				i--;
			}
			free(map->sol->dp);
			return (1);
		}
		i++;
	}
	map->sol->dp[map->rows] = NULL;
	return (0);
}

int	ft_init_rows(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->rows)
	{
		if (map->grid[i][0] == map->empty)
			map->sol->dp[i][0] = map->grid[i][0];
		if (map->sol->dp[i][0] > map->sol->max_size)
		{
			map->sol->max_size = map->sol->dp[i][0];
			map->sol->max_i = i;
			map->sol->max_j = 0;
		}
		i++;
	}
	return (0);
}

int	ft_init_cols(t_map *map)
{
	int	j;

	j = 0;
	while (j < map->cols)
	{
		if (map->grid[0][j] == map->empty)
			map->sol->dp[0][j] = map->grid[0][j];
		if (map->sol->dp[0][j] > map->sol->max_size)
		{
			map->sol->max_size = map->sol->dp[0][j];
			map->sol->max_i = 0;
			map->sol->max_j = j;
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
			return (c);
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
