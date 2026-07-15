/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:48:32 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 10:50:52 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	ft_choose_op(char *av1, char *op, char *av2)
{
	int	num1;
	int	num2;
	int	result;

	num1 = ft_atoi(av1);
	num2 = ft_atoi(av2);
	result = ft_calculate(num1, num2, ft_cmp, op);
	return (result);
}

int	ft_calculate(int num1, int num2, int (*f)(char*), char *oper)
{
	int	result;
	int	op;
	int	(*cal[5])(int, int);

	result = -1;
	op = (*f)(oper);
	if (op == -1)
		return (0);
	cal[0] = &ft_add;
	cal[1] = &ft_sub;
	cal[2] = &ft_mul;
	cal[3] = &ft_div;
	cal[4] = &ft_mod;
	result = (cal)[op](num1, num2);
	return (result);
}
