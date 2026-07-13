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

int	ft_parse_each_file(char *av, struct s_map *map)
{
	int		file;
	int		reading;
	char	buffer[61440];
	char	*temp;
	
	file = 0;
	reading = 0;
	temp = malloc(sizeof(char) * 1);
	if (!temp)
		return (0);
	*temp = '\0';
	file = open(av, O_RDONLY);
	if (file == -1)
		return (-1);
	reading = read(file, buffer, sizeof(buffer));
	if (reading == -1)
		return (0);
	while (reading > 0)
	{
		reading = read(file, buffer, sizeof(buffer));
		buffer[reading] = '\0';
		temp = ft_strjoin(temp, buffer);
	}
	map = ft_parse_in_struct(temp, map);
	if (close(file) == -1)
		return (-1);
	return (0);
}

struct s_map	*ft_parse_in_struct(char *buffer, struct s_map *map)
{
	int	i;
	int	check;
	int	flag;
	
	i = 0;
	flag = 0;
	while (buffer[i] != '\0')
	{
		while (buffer[i] != '\n' && flag == 0)
		{
			map->size = ft_size(buffer);
			map->empty = ft_empty(buffer);
			map->obst = ft_obst_full(buffer, map->empty);
			map->full = ft_obst_full(buffer, map->full);
			flag = 1;
			i++;
		}
		if (buffer[i] == '\n')
			i++;
		map->map = ft_map_parsing(buffer, i);
		i += ft_strlen(buffer);
	}
	check = ft_check(map);
	if (check < 0)
		return (NULL);
	return (map);
}

char	**ft_map_parsing(char *buffer, int i)
{
	char	**map;
	int	len;
	int	k;
	
	len = ft_len_buffer(buffer, i);
	map = malloc(sizeof(char *) * (len + 1));
	if (!map)
		return (NULL);
	k = 0;
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
