/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:06:00 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 11:08:41 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_init_inta(int *array);
int		*ft_atoai(char *str, int *cond);
int		ft_strcheck(char *str);
int		ft_error(int *cond);
int		ft_solver(int *grid, int *cond);
int		ft_crit_error(int *grid, int *cond);
void	ft_output(int *grid);

int	main(int argc, char **argv)
{
	int	*cond;
	int	*grid;

	cond = NULL;
	grid = NULL;
	cond = ft_init_inta(cond);
	grid = ft_init_inta(grid);
	if ((argc == 1) || (ft_strcheck(argv[1]) == 0)
		|| (grid == NULL) || (cond == NULL))
		return (ft_crit_error(grid, cond), 0);
	*cond = *ft_atoai(argv[1], cond);
	if (!(ft_error(cond)))
		return (ft_crit_error(grid, cond), 0);
	if (!(ft_solver(grid, cond)))
		return (ft_crit_error(grid, cond), 0);
	ft_output(grid);
	free(grid);
	free(cond);
	return (0);
}

int	*ft_init_inta(int *array)
{
	int	i;

	i = 0;
	array = malloc(sizeof(int) * 16);
	while (i < 16)
	{
		array[i] = 0;
		i++;
	}
	return (array);
}

/*
transforms the str char array into the int array cond
*/
int	*ft_atoai(char *str, int *cond)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == 32)
		{
			i++;
			continue ;
		}
		cond[j] = (str[i] - '0');
		j++;
		i++;
	}
	return (cond);
}
