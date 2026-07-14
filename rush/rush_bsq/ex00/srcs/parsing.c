/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   parsing.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 12:00:43 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/13 12:00:44 by tschwab        ########   odam.nl        */
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
	if(ft_parse_first_line(map, temp))
		return (1);
	if(ft_allocate_grid(map))
		return (1);
	if (ft_parse_grid(map, temp))
		return (1);
	free(temp);
	return (0);
}

int	ft_parse_first_line(t_map *map, char *temp)
{
	char	*line;
	int	len;
	int	i;
	
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
	int rows = map->rows;
	int cols = map->cols;

	map->grid = (char **)malloc(sizeof(char *) * (rows + 1));
	if (map->grid == NULL)
		return (1);
	i = 0;
	while (i < rows)
	{
		map->grid[i] = (char *)malloc(sizeof(char) * (cols + 1));
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
	map->grid[rows] = NULL;
	return (0);
}

int	ft_parse_grid(t_map *map, char *temp)
{
	char	*line;
	int	i;
	int	j;
	int	start;
	
	i = 0;
	start = 0;
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

/*
char	**ft_map_parsing(char *buffer, int i)
{
	char	**map;
	int	len;
	int	k;
	
	len = ft_len_buffer(buffer, i);
	map = malloc(sizeof(char *) * (len + 1));
	if (!map)
		return (NULL);
	k = 0;(new_len > 0 && new[new_len - 1] == '\n') 
			new[new_len - 1] = '\0
	while (k < len)
	{
		map[k] = ft_dup(buffer, i);
		k++;
		i += ft_strlen_n(buffer);
	}
	map[k] = NULL;
	return (map);
}

char	*ft_dup(char *buffer, int i)
{
	int	j;
	int	len;
	char	*str;
	
	j = 0;
	len = ft_strlen_n(buffer + i);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (j < len)
	{
		str[j] = buffer[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
*/
