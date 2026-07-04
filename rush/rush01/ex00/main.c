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

#include <string.h>
#include <stdio.h>
#include <unistd.h>

/*
void	ft_putnubr(char c);
void	ft_putspace(void);
*/
int	*ft_init_inta(int *array);
int	*ft_atoai(char *str, int *result);
int	ft_strcheck(char *str);
int	ft_error(int *conditions);
int	ft_solver(int *grid, int *conditions);

int	main(int argc, char **argv)
{
	int	*conditions;
	int *grid,
	
	*conditions = malloc(16 * sizeof(int));
	*grid = malloc(16 * sizeof(int));
	if ((argc == 0) || (ft_strcheck(argv[1]) == 0) || (!grid) || (!conditions))
	{	
		free(conditions);
		free(grid);
		return (write(1, "Error", 5), 0);
	}
	*grid = ft_init_inta(grid);
	*conditions = *ft_init_inta(conditions);
	*conditions = *ft_atoai(argv[1], conditions);
	if (!ft_error(conditions)
		return (write(1, "Error", 5) 0);
	if (!ft_solver(grid, conditions)
		return (write(1, "Error", 5) 0);
	ft_output(grid);
	return (0);
}

int	*ft_init_inta(int *array)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		array[i] = '0';
		i++;
	}
	return (array);
}
