/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_combn.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 11:01:31 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 09:11:16 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
Write the value in char
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
Prints the value stocked at the current tab index starting
from let (0) to right (n)
*/
void	ft_print(int *tab, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

/*
Places the right numbers in the right index using recursivity, sending 
a print order when we reach the desired depth (n)
While loop populates the number in the index of the tab using i value, then 
calls the recursivity adding up 1 to both the index and the value desired to 
be entered ensuring we go to the right depth and do not place a duplicate value
*/
void	ft_find_num(int *tab, int depth, int c_min, int n)
{
	int	i;

	i = c_min;
	if (n <= 0 || n >= 10)
		return;
	if (depth == n)
	{
		ft_print(tab, n);
		return;
	}
	while (i <= 9)
	{	
		tab[depth] = i;
		ft_find_num(tab, depth + 1, i + 1, n);
		i++;
	}
}

/*
Initiate the tab at the right max dimension for the whole program
*/
void	ft_print_combn(int n)
{
	int	tab[9];

	ft_find_num(tab, 0, 0, n);
}

int 	main(void)
{
	ft_print_combn(1);
	ft_putchar('\n');
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(3);
	ft_putchar('\n');
	ft_print_combn(4);
	ft_putchar('\n');
	ft_print_combn(5);
	ft_putchar('\n');
	ft_print_combn(6);
	ft_putchar('\n');
	ft_print_combn(7);
	ft_putchar('\n');
	ft_print_combn(8);
	ft_putchar('\n');
	ft_print_combn(9);
	return (0);
}
