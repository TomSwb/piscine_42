/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeyer <almeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 10:52:31 by almeyer           #+#    #+#             */
/*   Updated: 2026/06/27 15:24:39 by almeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
Write the character depending specific conditions
*/
void	ft_whoschar(int x, int y, int j, int i)
{
	if ((i == 1 && j == 1) || (i == x && j == 1)
		|| (i == 1 && j == y) || (i == x && j == y))
		ft_putchar('o');
	else if (j == 1 || j == y)
		ft_putchar('-');
	else if (i == 1 || i == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
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
