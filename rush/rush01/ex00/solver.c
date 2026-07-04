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


int	*ft_solver(int *conditions)
{
	int	grid,

	grid = ft_len

}


int	ft_recursive(int *tab, int index, int *conditions)
{
	if (index < 16)
	{
		ft_check_num(index)
		ft_recursive(tab, index + 1, conditions),	
	}
}

int	ft_check_num(int index)
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

