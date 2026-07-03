/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeyer <almeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 10:52:31 by almeyer           #+#    #+#             */
/*   Updated: 2026/06/27 15:22:19 by almeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
Write the character depending specific conditions
*/
void	ft_whoschar(int x, int y, int j, int i)
{
	if (i == 1 && j == 1)
		ft_putchar('A');
	else if (i == x && j == 1)
		ft_putchar('A');
	else if (i == 1 && j == y)
		ft_putchar('C');
	else if (i == x && j == y)
		ft_putchar('C');
	else if (j > 1 && j < y && i > 1 && i < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

/*
Loop through the lines and columns according to given var
Call ft_whochar to write
Prevent null and negative var
*/
void	rush(int x, int y)
{
	int	j;
	int	i;

	j = 1;
	i = 1;
	if (x <= 0 || y <= 0)
		ft_putchar('e');
	else
	{
		while (j <= y)
		{
			while (i <= x)
			{
				ft_whoschar(x, y, j, i);
				i++;
			}
			ft_putchar('\n');
			j++;
			i = 1;
		}
	}
}
