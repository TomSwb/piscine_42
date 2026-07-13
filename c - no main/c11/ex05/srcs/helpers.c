/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   helpers.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 16:55:23 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 16:55:24 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_atoi(char *num)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((num[i] == 32) || (num[i] <= 13 && num[i] >= 9))
		i++;
	while (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			sign = -sign;
		i++;
	}
	while (num[i] >= 48 && num[i] <= 57)
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_cmp(char *op)
{
	int	i;

	i = 0;
	while (op[i])
	{
		if (op[i] == '+')
			return (1);
		else if (op[i] == '-')
			return (2);
		else if (op[i] == '*')
			return (3);
		else if (op[i] == '/')
			return (4);
		else if (op[i] == '%')
			return (5);
		else
			i++;
	}
	return (0);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	ft_putchar(num + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
