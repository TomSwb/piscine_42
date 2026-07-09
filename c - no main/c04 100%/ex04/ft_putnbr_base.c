/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr_base.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/01 08:17:05 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/01 11:41:07 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
char	ft_check_base(char *base);
void	ft_putnbr(long nb, char *base, int baselen);

/*
Return og number converted to the given base, 
only if the given base is correct accoding to amount, +- and dup check
*/

void	ft_putnbr_base(int nbr, char *base)
{
	long	nblong;
	char	baselen;

	nblong = nbr;
	baselen = ft_check_base(base);
	if (baselen <= 1)
		return ;
	ft_putnbr(nblong, base, baselen);
}

char	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+')
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == 32)
			return (0);
		i++;
	}
	i = 0;
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (i + 1);
}

void	ft_putnbr(long nb, char *base, int baselen)
{
	long	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= baselen)
	{
		ft_putnbr(nb / baselen, base, baselen);
		nb = nb % baselen;
	}
	i = 0;
	while (nb != i)
		i++;
	write(1, &base[i], 1);
}
