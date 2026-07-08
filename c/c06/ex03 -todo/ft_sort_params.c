/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 08:11:44 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/08 08:11:46 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_short_params(int ac, char **arv);
int	ft_strcmp(char *s1, char *s2);
void	ft_swap(char *a, char *b);
void	ft_putstr(char **arr);

int	main(int argc, char **argv)
{
	ft_short_params(argc, argv);
	return (0);
}

void	ft_short_params(int ac, char **arv)
{
	int	i;
	
	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(arv[i], arv[i + 1]) > 0)
			ft_swap(arv[i], arv[i + 1]);
		i++;
	}
	ft_putstr(arv);
}


int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] && s1[i] == s2[i])	
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char *a, char *b)
{
	char	*temp;

	temp = a;
	a = b;
	b = temp;
}

void	ft_putstr(char **arr)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	while (arr[i])
	{
		while (arr[i][j])
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;	
	}
}
