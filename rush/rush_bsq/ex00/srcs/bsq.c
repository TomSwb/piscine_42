/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 10:04:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 20:27:59 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_bsq(int fd)
{
	t_map	map;

	ft_init_map(&map);
	if (ft_parser(&map, fd))
		return (1);
	if (ft_validate_map(&map))
		return (ft_free(&map, 1));
	if (ft_solver(&map))
		return (ft_free(&map, 1));
	ft_print(&map);
	ft_free(&map, 0);
	return (0);
}

void	ft_init_map(t_map *map)
{
	map->rows = 0;
	map->cols = 0;
	map->empty = '.';
	map->obst = 'o';
	map->full = 'x';
	map->grid = NULL;
	map->sol = malloc(sizeof(t_solved));
	if (!map->sol)
	{
		ft_free(map, 1);
		exit(1);
	}
	map->sol->max_size = 0;
	map->sol->max_i = 0;
	map->sol->max_j = 0;
	map->sol->dp = NULL;
}

void	ft_print(t_map *map)
{
	int	i;

	i = 0;
	while (map->grid[i])
	{
		ft_putstr(map->grid[i]);
		ft_putstr("\n");
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
