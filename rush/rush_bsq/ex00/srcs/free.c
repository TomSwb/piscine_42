/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:50:18 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 18:38:42 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_free_extend(t_map *map)
{
	int	i;

	if (map->sol)
	{
		i = 0;
		if (map->sol->dp)
		{
			while (i < map->rows)
			{
				free(map->sol->dp[i]);
				i++;
			}
			free(map->sol->dp);
		}
		free(map->sol);
	}
}

int	ft_free(t_map *map, int err)
{
	int	i;

	i = 0;
	if (map->grid)
	{
		while (map->grid[i])
		{
			free(map->grid[i]);
			i++;
		}
		free(map->grid);
	}
	ft_free_extend(map);
	return (err);
}
