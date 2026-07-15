/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:44:16 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 14:29:49 by tschwab          ###   ########.fr       */
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
			fd = open(av[i], O_RDONLY);
			if (fd == 0)
			{
				ft_putstr("map error\n");
				i++;
				continue ;
			}
			if (ft_bsq(fd) != 0)
				ft_putstr("map error\n");
			close(fd);
			i++;
		}
	}
//	else
//		ft_bsq_stdin();
	return (0);
}
