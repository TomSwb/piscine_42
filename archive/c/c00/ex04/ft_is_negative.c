/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_negative.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/24 10:10:38 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/24 10:21:48 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
check if int is positive or negative and return accordingly
*/
void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
