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


int	*ft_solver(int *conditions, int *grid)
{
	int	size;

	size = 16;
	if (!ft_recursive(grid, 0, conditions, size))
		return (0);
	return(1);
}


int	ft_recursive(int *tab, int index, int *conditions, int size)
{
	int	num;

	if (index == size)
		return (1);
	num = 1;
	while (num <= 4))
	{
		if (ft_check_num(num, index, grid, conditions)
		{
			grid[index] = num;
			if ft_recursive(grid, index + 1, conditions, size);
				return (1);
			grid[index] = 0;
		}
	num++;
	}
	return (0);
}

int	ft_check_num(int num, int index, int *grid, int *conditions)
{
	int	row;
	int	cln;
	int c;
	int r;
	
	row = index / 4;
	cln = index % 4;
	c = 0;
	r = 0;
	while(c < 4)
	{
		if (grid[row * 4 + c] == num;
			return (0);
		c++
	}
	while(r < 4)
	{
		if (grid[r * 4 + cln] == num;
			return (0);
		r++
	}
	return (1);
}
