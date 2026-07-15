/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:44:16 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 22:25:28 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (extend_main(&fd, av[i]))
			{
				i++;
				continue ;
			}
			if (ft_bsq(fd) != 0)
				ft_putstr("map error\n");
			close(fd);
			if (ac > 2)
				ft_putstr("\n");
			i++;
		}
	}
	else
		ft_bsq(0);
	return (0);
}

int	extend_main(int *fd, char *av)
{
	*fd = open(av, O_RDONLY);
	if (*fd == 0)
	{
		ft_putstr("map error\n");
		return (1);
	}
	return (0);
}
