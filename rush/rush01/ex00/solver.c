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
	

	ft_validate(num)
}

int	ft_validate(int num)
{

}




char	*ft_solver(int *clean)
{
	int	lin;
	int	cln
	char	tab[4][4];
	int	i;
	
	lin = 0;
	cln = 0;
	i = 0;
	while (i < 15 && tab[lin])
	{
		while (tab[lin][cln])
		{
			if (clean[i] == 4)
				tab[lin][cln] = '1';
			else if (clean[i] == 3)
				tab[lin][cln] = num[n];
			else if (clean[i] == 2)
				tab[lin][cln] = num[n];
			else 
				tab[lin][cln] = '4';
			cln++;
			i++;
		}
		cln = 0;
		lin++;
	}
}

