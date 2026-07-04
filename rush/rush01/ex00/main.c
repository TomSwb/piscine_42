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
int	*ft_init_inta(int *clean);
int	*ft_atoai(char *str, int *result);
int	ft_strcheck(char *str);
int	ft_error(int *clean);


int	main(int argc, char **argv)
{
	int	clean[16];
	int	i;

	i = 0;
	if ((argc == 0) || (ft_strcheck(argv[1]) == 0))
	{
		write(1, "Error", 5);
		return (0);
	}
	*clean = *ft_init_inta(clean);
	*clean = *ft_atoai(argv[1], clean);
	if (ft_error(clean) == 0)
		return (0);
	i = 0;
	while (i <= 15)
	{
		printf("%d", clean[i]);
		i++;
	}
	return (0);
}

int	*ft_init_inta(int *clean)
{
	int	i;

	i = 0;
	while (i < 15)
	{
		clean[i] = '0';
		i++;
	}
	return (clean);
}
