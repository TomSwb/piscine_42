/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpiervit <mpiervit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:15:38 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/12 16:53:05 by mpiervit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

/*
code error 1 : invalid or negatif integer
code error 2 : dictionary parsing error or unable to convert number
*/

int	ft_error(int error_code)
{
	if (error_code == 1)
	{
		write(1, "Error\n", 5);
		return (-1);
	}
	else if (error_code == 2)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (0);
}

int ft_char_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_checkchar(char *num)
{
	while (*num)
		if (!ft_char_is_numeric(*num++))
			return (1);
	return (0);
}
