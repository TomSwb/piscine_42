/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 11:44:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/13 11:44:17 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	main(int ac, char **av)
{
	t_map	**maps;
	int	i;
	
	if (ac < 2)
		return (-1);
	maps = malloc(sizeof(struct s_map *) * ac);
	if (!maps)
		return (-1);
	i = 1;
	while (av[i])
	{
		ft_parse_each_file(av[i], maps[i]);
		ft_print(maps[i]);
		i++;
	}
	free(maps);
	return (0);
}

void	ft_print(struct s_map *map)
{
	int	j;

	printf("size : %d\n", map->size);
	printf("empty : %c\n", map->empty);
	printf("obst : %c\n", map->obst);
	printf("full : %c\n", map->full);
	j = 0;
	while (map->map[j])
	{
		printf("%s\n", map->map[j]);
		j++;
	}
}
