/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ops.c                                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 16:48:32 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 16:48:34 by tschwab        ########   odam.nl        */
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

	result = -1;
	op = (*f)(oper);
	if (op == 1)
		result = num1 + num2;
	else if (op == 2)
		result = num1 - num2;
	else if (op == 3)
		result = num1 * num2;
	else if (op == 4)
	{
		if (num2 == 0)
			write(1, "Stop: division by zero\n", 23);
		else
			result = num1 / num2;
	}
	else if (op == 5)
	{
		if (num2 == 0)
			write(1, "Stop: modulo by zero\n", 22);
		else
			result = num1 % num2;
	}
	else
		result = 0;
	return (result);
}
