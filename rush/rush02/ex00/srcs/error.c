/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:15:38 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/11 14:52:36 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

/*
code error 1 : invalid or negatif integer
code error 2 : dictionary parsing error or unable to convert number
*/

void	ft_error(int error_code)
{
	if (error_code == 1)
		write(1, "Error\n", 5);
	else if (error_code == 2)
		write(1, "Dict Error\n", 11);
}