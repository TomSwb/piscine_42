/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:08:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 15:42:37 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

// a bouger
void	ft_yolo(t_map *map)
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

int	ft_solver(t_map *map)
{
	// int	i;
	map->sol->max_size = 0;
	map->sol->max_i = 0;
	map->sol->max_j = 0;
	if (ft_allocate_dp(map))
		return (1);
	if (ft_solve_map(map))
		return (1);
	ft_yolo(map);
	// i = 0;
	// while (i < map->rows)
	// {
	// 	free(map->sol->dp[i]);
	// 	i++;
	// }
	// free(map->sol->dp);
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
				map->sol->dp[i][j] = ft_smaller_of3(map->sol->dp[i - 1][j],
						map->sol->dp[i][j - 1], map->sol->dp[i - 1][j - 1]) + 1;
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

int	min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

int	ft_solve_map(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if (map->grid[i][j] == map->obst)
				map->sol->dp[i][j] = 0;
			else
			{
				if (i == 0 || j == 0)
					map->sol->dp[i][j] = 1;
				else
					map->sol->dp[i][j] = min(map->sol->dp[i - 1][j],
							map->sol->dp[i][j - 1], map->sol->dp[i - 1][j - 1])
						+ 1;
			}
			if (map->sol->dp[i][j] > map->sol->max_size)
			{
				map->sol->max_size = map->sol->dp[i][j];
				map->sol->max_i = i;
				map->sol->max_j = j;
			}
			j++;
		}
		i++;
	}
	return (0);
}
