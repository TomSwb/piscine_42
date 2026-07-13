/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lib.h                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 17:41:31 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 17:41:33 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdio.h>

int		ft_choose_op(char *num1, char *op, char *num2);
int		ft_calculate(int num1, int num2, int (*f)(char*), char *oper);

int		ft_atoi(char *num);
int		ft_cmp(char *op);
void	ft_putnbr(int num);
void	ft_putchar(char c);

#endif
