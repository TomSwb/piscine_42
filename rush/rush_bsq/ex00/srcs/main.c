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
	int	fd;
	int	i;
	
	if (ac > 1)
	{
		i = 1;
		while(i < ac)
		{
			fd = open(av[i], O_RDONLY);
	//		if (fd == 0)
	//		{
		///		ft_error(1);
	//			i++;
	//			continue ;
	//		}
		//	if (ft_bsq(fd) != 0)
		//		ft_error(1);
			ft_bsq(fd);
			close(fd);
			i++;
		}
	}
//	else
//		ft_bsq_stdin();
	return (0);
}


