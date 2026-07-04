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

#include <unistd.h>

int	ft_check(int start, int stop, int *clean);

int	ft_error(int *clean)
{
	int	flag;

	flag = 0;
	flag = ft_check(0, 3, clean);
	flag = ft_check(8, 11, clean);
	return (flag);
}

int	ft_check(int start, int stop, int *clean)
{
	int	flag;
	int	i;

	flag = 1;
	i = start;
	while (i <= stop && flag == 1)
	{
		if (clean[i] + clean[i + 3] > 5
			|| clean[i] + clean[i + 3] < 2)
		{	
			write(1, "Error", 5);
			return (0);
		}
		i++;
	}
	return (flag);
}

/*
check 1 4 only per cln or row

