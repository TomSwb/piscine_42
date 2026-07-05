/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 17:26:08 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 17:26:10 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive(int *grid, int index, int *cond);
int	ft_check_dup(int num, int index, int *grid);
int	ft_check_all_cond(int *grid, int *cond);

/*
Gets the grid and cond and send them to the recursive function
*/
int	ft_solver(int *grid, int *cond)
{
	if (!(ft_recursive(grid, 0, cond)))
		return (0);
	return (1);
}

/*
Recursively iterates through the candidate num, sending them to validation 
and moving forward and backtracking according to the validation.
*/
int	ft_recursive(int *grid, int index, int *cond)
{
	int	num;

	if (index == 16)
		return (ft_check_all_cond(grid, cond));
	num = 1;
	while (num <= 4)
	{
		if (ft_check_dup(num, index, grid))
		{
			grid[index] = num;
			if (ft_recursive(grid, index + 1, cond))
				return (1);
			grid[index] = 0;
		}
		num++;
	}
	return (0);
}

/*
Checks the candidate num against duplicates in the same row / col then 
send ot validation with the conditions
*/
int	ft_check_dup(int num, int index, int *grid)
{
	int	row;
	int	col;
	int	i;

	row = index / 4;
	col = index % 4;
	i = 0;
	while (i < 4)
	{
		if (grid[row * 4 + i] == num)
			return (0);
		if (grid[i * 4 + col] == num)
			return (0);
		i++;
	}
	return (1);
}
