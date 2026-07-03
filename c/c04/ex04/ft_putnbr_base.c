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
#include <stdio.h>
#include <string.h>

void	ft_putnbr_base(int nbr, char *base);
char	ft_check_base(char *base);
void	ft_putnbr(long nb, char *base, int baselen);

int	main(void)
{
	char	nl;

	nl = '\n';
	ft_putnbr_base(-42, "0123456789");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "poneyvif");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "01");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "01223456779");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "012456789a+bcdef");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "pone-yvif");
	write(1, &nl, 1);
	ft_putnbr_base(-42, "5");
	write(1, &nl, 1);
	return (0);
}

/*
Return ne og number converted to the given base, 
only if the given base is correct
*/

void	ft_putnbr_base(int nbr, char *base)
{
	long	nblong;
	char	baselen;

	nblong = nbr;
	baselen = ft_check_base(base);
	if (baselen == 0)
		return ;
	ft_putnbr(nblong, base, baselen);
}

char	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[0] == '\0' || base[1] == '\0')
		{
			printf("amount check out: ");
			printf("%s\n", base);
			return (0);
		}
		if ((base[i] == '-') || (base[i] == '+'))
		{
			printf("- + check out: ");
			printf("%s\n", base);
			return (0);
		}
		i++;
	}
	i = 0;
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
		{
			j++;
		}
		if (base[i] == base[j])
		{
			printf("dup check out: ");
			printf("%s\n", base);
			return (0);
		}
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
