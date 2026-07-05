/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 20:26:01 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/05 20:26:05 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_single_cond(int *grid, int start, int gap, int cond);
/*
Check all the completed grid against all the conditions
*/

int	ft_check_all_cond(int *grid, int *cond)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_check_single_cond(grid, i, 4, cond[i]))
			return (0);
		if (!ft_check_single_cond(grid, i + 12, -4, cond[i + 4]))
			return (0);
		if (!ft_check_single_cond(grid, i * 4, 1, cond[i + 8]))
			return (0);
		if (!ft_check_single_cond(grid, i * 4 + 3, -1, cond[i + 12]))
			return (0);
		i++;
	}
	return (1);
}

/*
Checks the conditions according to the given data one by one.
*/
int	ft_check_single_cond(int *grid, int start, int gap, int cond)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[start + (i * gap)] > max)
		{
			max = grid[start + (i * gap)];
			count++;
		}
		i++;
	}
	if (count == cond)
		return (1);
	return (0);
}
