/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:21:10 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 21:53:18 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

char	*ft_read_file(int fd, char *temp)
{
	int		reading;
	char	buffer[61440];

	reading = read(fd, buffer, sizeof(buffer));
	if (reading == -1)
		return (0);
	buffer[reading] = '\0';
	while (reading > 0)
	{
		temp = ft_strjoin(temp, buffer);
		reading = read(fd, buffer, sizeof(buffer));
		buffer[reading] = '\0';
	}
	return (temp);
}

char	*ft_read_first_line(char *temp)
{
	char	*line;
	ssize_t	read;
	int		len;

	if (!temp)
		return (NULL);
	len = ft_strlen_n(temp, 0);
	line = malloc(sizeof(char) + (len + 1));
	if (!line)
		return (NULL);
	read = ft_get_line(temp, line);
	if (read <= 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

int	ft_check_first_line(t_map *map)
{
	if (map->rows == 0)
		return (1);
	else
		map->cols = map->rows;
	if (map->empty == map->obst || map->empty == map->full 
			|| map->obst == map->full)
			return (1);
	return (0);
}

int	ft_get_line(char *temp, char *line)
{
	int	count;

	count = 0;
	while (*temp != '\n' && *temp)
	{
		*line = *temp;
		count++;
		line++;
		temp++;
	}
	*line = '\0';
	return (count);
}

char	*ft_read_grid_line(char *temp, int start)
{
	char	*line;
	ssize_t	read;
	int		len;

	if (!temp)
		return (NULL);
	len = ft_strlen_n(temp, start);
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	read = ft_get_line(temp, line);
	if (read <= 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
