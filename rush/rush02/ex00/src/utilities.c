/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 20:23:30 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/12 22:05:58 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *num, char *key)
{
	int	i;

	i = 0;
	while (num[i] && num[i] == key[i])
		i++;
	return (num[i] - key[i]);
}

long long	ft_strlen(char *num)
{
	long long	i;

	i = 0;
	while (num[i] != '\0')
		i++;
	return (i);
}
