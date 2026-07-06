/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:55:15 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/06 17:55:17 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tabs(int ac, char ** av);
int	ft_strlen(char	*str);
char	*ft_strdup(char *src);

int	main(void)
{
	int	size = 5;
	char	*strs[5] = {"Hello", "World", "How", "are", "you?"};
	
	struct s_stock_str *tab = ft_strs_to_tabs(size, strs);
	return (0);
}

struct s_stock_str	*ft_strs_to_tabs(int ac, char **av)
{
	int	i;
	s_stock_str *tab;
	
	i = 0;
	tab = malloc(sizeof(s_stock_str) * ac + 1);
	if (!(tab))
		return (NULL);
	while (i <= ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].string = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
		if ((tab[i].size == NULL) || (tab[i].string == NULL) 
			|| (tab[i].copy == NULL))
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
