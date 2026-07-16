/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:55:23 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 10:45:46 by tschwab          ###   ########.fr       */
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
	if (*op == '+')
		return (0);
	else if (*op == '-')
		return (1);
	else if (*op == '*')
		return (2);
	else if (*op == '/')
		return (3);
	else if (*op == '%')
		return (4);
	else
		return (-1);
}

void	ft_putnbr(int num)
{
	long	nbr;

	nbr = num;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	ft_putchar(nbr + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
