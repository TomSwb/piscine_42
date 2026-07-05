/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_error.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: hechin <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/04 11:50:44 by hechin         #+#    #+#                */
/*   Updated: 2026/07/04 12:57:29 by hechin         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
/*
Error management file, error check on cond array and error message when needed
*/

int	ft_check(int start, int stop, int *cond);

int	ft_error(int *cond)
{
	int	flag;

	flag = 0;
	flag = ft_check(0, 3, cond);
	flag = ft_check(8, 11, cond);
	return (flag);
}

/*
Does the final error check on the cond array
*/
int	ft_check(int start, int stop, int *cond)
{
	int	flag;
	int	i;

	flag = 1;
	i = start;
	while (i <= stop && flag == 1)
	{
		if (cond[i] + cond[i + 4] > 5
			|| cond[i] + cond[i + 4] < 2)
			return (0);
		i++;
	}
	return (flag);
}

int	ft_crit_error(int *grid, int *cond)
{
	free(cond);
	free(grid);
	return ((write(1, "Error\n", 6)), 0);
}
