/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tabs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:55:15 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/06 17:55:17 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char ** av);
int	ft_strlen(char	*str);
char	*ft_strdup(char *src);
/*
void	ft_free_structs(struct s_stock_str *structs, int ac);*/
/*
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	// Test: ./a.out "Hello" "42" "School"
	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\t", i);
		printf("| size : %d\n", structs[i].size);
		printf("\t| str  : %s & %p\n", structs[i].str, structs[i].str);
		printf("\t| copy : %s & %p\n\n", structs[i].copy, structs[i].copy);
		i++;
	}
	ft_free_structs(structs, argc);
}
*/

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	struct s_stock_str *tab;
	
	i = 0;
	tab = malloc(sizeof(t_stock_str) * ac + 1);
	if (!(tab))
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
		if (&tab[i] == NULL)
			return (NULL);
	}
	tab[i].str = 0;
	return (tab);
}

int	ft_strlen(char	*str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		index;

	index = 0;
	while (src[index])
		index++;
	dup = malloc(sizeof(char) * index + 1);
	if (dup == NULL)
		return (NULL);
	index = 0;
	while (src[index])
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
/*
void	ft_free_structs(struct s_stock_str *structs, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (structs[i].copy != NULL)
			free(structs[i].copy);
		i++;
	}
	free(structs);
}
*/
