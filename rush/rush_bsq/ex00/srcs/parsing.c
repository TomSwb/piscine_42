/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:00:43 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 21:09:14 by tschwab          ###   ########.fr       */
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
		return (free(temp), ft_free(map, 1));
	if (ft_parse_first_line(map, temp))
		return (free(temp), ft_free(map, 1));
	if (ft_allocate_grid(map))
		return (free(temp), ft_free(map, 1));
	if (ft_parse_grid(map, temp, 0, 0))
		return (free(temp), ft_free(map, 1));
	if (ft_check(map))
		return (free(temp), ft_free(map, 1));
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
	i = -1;
	while (++i < len - 3 && line[i] >= 48 && line[i] <= 57)
		map->rows = map->rows * 10 + (line[i] - '0');
	free(line);
	if (ft_check_first_line(map))
		return (1);
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
			return (ft_free(map, 1));
		i++;
	}
	map->grid[map->rows] = NULL;
	return (0);
}

static int count_line_return(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int	ft_parse_grid(t_map *map, char *temp, int start, int i)
{
	char	*line;
	int		count;
	int		len;
	char	*check;

	start = ft_strlen_n(temp, start);
	len = ft_strlen(temp);
	count = 0;
	check = temp + start + 1;
	while (i < map->rows)
	{
		temp += start + 1;
		count += start + 1;
		if (len < count || ft_strlen(temp) < start 
			|| count_line_return(check) != map->rows - 1)
			return (1);
		line = ft_read_grid_line(temp, start);
		if (line == NULL)
			return (printf("NULL"),1);
		ft_strcpy(map->grid[i], line);
		i++;
		start = ft_strlen_n(temp, start);
		free(line);
	}
	return (0);
}

