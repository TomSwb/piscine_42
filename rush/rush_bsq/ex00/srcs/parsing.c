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

#include "..includes/ft_lib.h"

int	ft_parse_each_file(char *av, struct map)
{
	int		file;
	int		reading;
	char	buffer[4096];
	
	file = 0;
	reading = 0;
	file = open(av, O_RDONLY);
	if (file == -1)
		return (-1);
	reading = read(file, buffer, 4096);
	if (reading == -1)
		return (-1);
	buffer[reading] = '\0';
	map = ft_parse_in_struct(buffer, map);
	close(file);
	if (file == -1)
		return (-1);
	return (0);
}

struct	ft_parse_in_struct(char *buffer, struct map)
{
	int	i;
	
	i = 0;
	while (buffer[i] != '\n')
	{
		map.size = ft_size(buffer);
		map.empty = ft_empty(buffer);
		map.obst = ft_obst(buffer, map.empty);
		map.full = ft_full(buffer, map.full);
	}
	i++;
	map.map = ft_map_parsing(buffer, i);
	return (map);
}

char	**ft_map_parsing(char *buffer, int i)
{


}
