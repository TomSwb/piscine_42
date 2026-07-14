/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   bsq.c                                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 10:04:58 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/14 10:04:59 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_bsq(int fd)
{
	t_map	map;
	
	ft_init_map(&map);
	if (ft_parser(&map, fd))
		return (1);
//	if (ft_validate_map(&map))
//		return (1);
//	ft_solver(&map);
//	ft_clean_up(&map);
	ft_print(&map);
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
}

void	ft_print(t_map *map)
{
	printf("rows: %d\n", map->rows);
	printf("cols : %d\n", map->cols);
	printf("empty : %c\n", map->empty);
	printf("obst : %c\n", map->obst);
	printf("full : %c\n", map->full);
	int	i;
	i = 0;
	while (map->grid[i])
	{
		printf("%s\n", map->grid[i]);
		i++;
	}
	//free(map);
}

/*
void	ft_bsq_stding(void)
{
	int	reading;
	char	*buffer;
	
	reading = read(0, buffer, 1);
}*/
