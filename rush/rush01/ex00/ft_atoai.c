/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:41:10 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 11:42:12 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
/*



int	*ft_atoi(char *str, int *result);

int	main(void)
{
	char	str[] = "4 5 3 2 4 3 4 3 4 2 4 4 2 1 5 4";
	int	i;
	int	result[16] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	
	i = 0;
	*result = *ft_atoi(str, result);
	while (i <= 15)
	{
		printf("%d", result[i]);
		i++;
	}
	return (0);
}
*/

#include <stdio.h>
#include <string.h>

int	ft_len(char *str);

int	*ft_atoai(char *str, int *result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	*result = ft_len(str);
	while (str[i])
	{
		if (str[i] == 32)
		{
			i++;
			continue ;
		}
		result[j] = (str[i] - '0');
		j++;
		i++;
	}
	return (result);
}

int	ft_len(char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		count++;
		if (str[index] == ' ')
			count--;
		index++;
	}
	return (count);
}
