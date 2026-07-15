/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 10:04:58 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 14:46:35 by alnoukan         ###   ########.fr       */
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
		return (1);
	else
		ft_print(&map);
	ft_solver(&map);
	//	ft_clean_up(&map);
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
	map->solution = malloc(sizeof(t_solved));
	map->solution->max_size = 0;
	map->solution->max_i = 0;
	map->solution->max_j = 0;
	map->solution->dp = NULL;
}

void	ft_print(t_map *map)
{
	int	i;

	printf("rows: %d\n", map->rows);
	printf("cols : %d\n", map->cols);
	printf("empty : %c\n", map->empty);
	printf("obst : %c\n", map->obst);
	printf("full : %c\n", map->full);
	i = 0;
	while (map->grid[i])
	{
		printf("%s\n", map->grid[i]);
		i++;
	}
	// free(map);
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
/*
void	ft_bsq_stding(void)
{
	int	reading;
	char	*buffer;

	reading = read(0, buffer, 1);
}*/
