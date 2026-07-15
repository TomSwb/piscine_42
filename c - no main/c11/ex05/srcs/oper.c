/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 09:53:14 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 10:53:23 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int ft_add(int num1, int num2)
{
    return (num1 + num2);
}

int ft_sub(int num1, int num2)
{
    return (num1 - num2);
}

int ft_mul(int num1, int num2)
{
    return (num1 * num2);
}

int ft_div(int num1, int num2)
{
    if (num2 == 0)
    {
		write(1, "Stop : division by zero\n", 24);
        return (-1);
    }
    else
        return (num1 / num2);
    return (0);
}

int ft_mod(int num1, int num2)
{
    if (num2 == 0)
    {
		write(1, "Stop : modulo by zero\n", 23);
        return (-1);
    }
    else
        return (num1 % num2);
    return (0);
}