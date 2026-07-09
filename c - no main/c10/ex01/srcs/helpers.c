/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   helper.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 19:00:41 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 19:00:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int outp)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(outp, &str[i], 1);
		i++;	
	}
}

int	ft_strcmp(char *av)
{
	int	i;
	
	i = 0;
	while (av[i])
	{
		if ((av[i] >= 97 && av[i] <= 122)
			|| (av[i] >= 65 && av[i] <= 90)
			|| (av[i] >= 48 && av[i] <= 57)
			|| (av[i] == '.') || (av[i] == ' '))
			i++;
		else
			return(0);
	}
	return (1);
}


