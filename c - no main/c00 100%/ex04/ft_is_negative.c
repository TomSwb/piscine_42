/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_negative.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 10:10:38 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 09:25:00 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
write characters
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
check if int is positive or negative and return accordingly
*/
void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
