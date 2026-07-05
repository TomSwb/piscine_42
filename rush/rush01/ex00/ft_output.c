/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:49:00 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 16:49:09 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*
Write the final resolved grid using putchar and adding the spaces and 
newlines at requested spots
*/

void	ft_output(int *grid)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(grid[i] + 48);
		write(1, " ", 1);
		if (i == 3 || i == 7 || i == 11 || i == 15)
		{
			write(1, "\n", 1);
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
