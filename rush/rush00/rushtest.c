/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rushtest.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 15:34:59 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/27 16:37:54 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_whochar(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) 
			|| (i == x && j == y && x!= 1 && y != 1))	
		ft_putchar('/');
	else if ((i == x && j == 1) 
			|| (i == 1 && j == y))
		ft_putchar('\\');
	else if ((j > 1 && j < y && i < x && i > 1))
		ft_putchar(' ');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
		ft_putchar('!');
	else
	{
		while (j <= y)
		{
			while (i <= x)
			{
				ft_whochar(x, y, i, j);
				i++;
			}
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
}
