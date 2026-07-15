/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:00:43 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 15:09:35 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_parser(t_map *map, int fd)
{
	char	*temp;

	temp = malloc(sizeof(char) * 1);
	if (!temp)
		return (0);
	*temp = '\0';
	temp = ft_read_file(fd, temp);
	if (ft_strlen(temp) <= 0)
		return (1);
	if (ft_parse_first_line(map, temp))
		return (1);
	if (ft_allocate_grid(map))
		return (1);
	if (ft_parse_grid(map, temp, 0, 0))
		return (1);
	free(temp);
	return (0);
}

int	ft_parse_first_line(t_map *map, char *temp)
{
	char	*line;
	int		len;
	int		i;

	line = ft_read_first_line(temp);
	if (line == NULL)
		return (1);
	len = ft_strlen(line);
	if (line[len - 1] == '\n')
	{
		line[len - 1] = '\0';
		len--;
	}
	map->full = line[len - 1];
	map->obst = line[len - 2];
	map->empty = line[len - 3];
	i = len - 4;
	while (i >= 0)
	{
		map->rows = map->rows * 10 + (line[i] - '0');
		i--;
	}
	map->cols = map->rows;
	free(line);
	return (0);
}

int	ft_allocate_grid(t_map *map)
{
	int	i;

	map->grid = (char **)malloc(sizeof(char *) * (map->rows + 1));
	if (map->grid == NULL)
		return (1);
	i = 0;
	while (i < map->rows)
	{
		map->grid[i] = (char *)malloc(sizeof(char) * (map->cols + 1));
		if (map->grid[i] == NULL)
		{
			while (i > 0)
			{
				free(map->grid[i - 1]);
				i--;
			}
			free(map->grid);
			return (1);
		}
		i++;
	}
	map->grid[map->rows] = NULL;
	return (0);
}

int	ft_parse_grid(t_map *map, char *temp, int start, int i)
{
	char	*line;
	int		j;

	start = ft_strlen_n(temp, start);
	while (i < map->rows)
	{
		temp += start + 1;
		line = ft_read_grid_line(temp, start);
		if (line == NULL)
			return (1);
		j = 0;
		while (j < map->cols)
		{
			map->grid[i][j] = line[j];
			j++;
		}
		map->grid[i][j] = '\0';
		i++;
		start = ft_strlen_n(temp, start);
		free(line);
	}
	return (0);
}
