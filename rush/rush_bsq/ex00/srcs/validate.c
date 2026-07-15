/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 08:48:13 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 11:19:42 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_validate_map(t_map *map)
{
	if (ft_validate_rows_length(map))
		return (1);
	if ((ft_validate_chars(map)))
		return (1);
	return (0);
}

int	ft_validate_rows_length(t_map *map)
{
	int	i;
	int	len;

	len = ft_strlen(map->grid[0]);
	i = 1;
	while (i < map->rows)
	{
		if (ft_strlen(map->grid[i]) != len)
			return (1);
		i++;
	}
	return (0);
}

int	ft_validate_chars(t_map *map)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			c = map->grid[i][j];
			if (c != map->empty && c != map->obst)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
