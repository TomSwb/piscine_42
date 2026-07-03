/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_comb2.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/26 13:57:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/28 09:23:40 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Return all possible combination of XX XX digits with no duplicate between i & j
*/
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((j / 10) + '0');
			ft_putchar((j % 10) + '0');
			j++;
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
		j = i + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
