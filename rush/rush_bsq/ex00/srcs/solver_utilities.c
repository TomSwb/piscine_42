/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 08:17:04 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 20:29:29 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_allocate_dp(t_map *map)
{
	int	i;
	int	j;

	map->sol->dp = (int **)malloc(sizeof(int *) * (map->rows + 1));
	if (map->sol->dp == NULL)
		return (1);
	i = 0;
	while (i < map->rows)
	{
		map->sol->dp[i] = (int *)malloc(sizeof(int) * (map->cols + 1));
		if (map->sol->dp[i] == NULL)
			return (1);
		j = 0;
		while (j < map->cols)
		{
			map->sol->dp[i][j] = 0;
			j++;
		}
		i++;
	}
	map->sol->dp[i] = NULL;
	return (0);
}

int	ft_min(int a, int b, int c)
{
	int	min;

	min = 0;
	if (a <= b && a <= c)
		min = a;
	else if (b <= a && b <= c)
		min = b;
	else
		min = c;
	return (min + 1);
}
