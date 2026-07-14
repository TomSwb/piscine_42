/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   helper.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 19:00:41 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 19:00:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

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

int	ft_strcmp(char *av, char *s2)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_atoi(char *av)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (av[i] == 32 || (av[i] >= 9 && av[i] <= 13))
		i++;
	while (av[i] == '-' || av[i] == '+')
	{
		if (av[i] == '-')
			sign = -1;
		i++;
	}
	while (av[i] >= 48 && av[i] <= 57)
	{
		result = result * 10 + (av[i] - '0');
		i++;
	}
	return (result * sign);
}
