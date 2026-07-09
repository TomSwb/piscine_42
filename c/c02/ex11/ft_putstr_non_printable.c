/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 15:02:50 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/30 15:59:08 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_printhexa(unsigned char c);
void	ft_putchar(char c);
/*
int	main(void)
{
	char	str[] = "kflsdj\n,\r,fsdf\v,fasd\t.";

	ft_putstr_non_printable(str);
}
*/
void	ft_putstr_non_printable(char *str)
{
	int	i;

	i= 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_printhexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}
