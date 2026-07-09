/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base2.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 09:12:46 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 09:12:49 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_digit_places(int nbr, char *base, int count);
int	ft_strlen(char *str);

char	*ft_putnbr_base(int nbr, char *base, char *converted, int last)
{
	int	baselen;
	int	first;
	
	baselen = ft_strlen(base);
	first = 0;
	if (nbr < 0)
	{
		converted[0] = '-';
		nbr *= -1;
		first++;
	}
	last--;
	while (nbr >= baselen)
	{
		converted[last] = base[nbr % baselen];
		nbr /= baselen;
		last--;
	}
  	if (nbr < baselen)
  		converted[first] = base[nbr];
  	return(converted);
}

int	ft_digit_places(int nbr, char *base, int count)
{
	int	baselen;
	
	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr >= baselen)
	{
		nbr /= baselen;
		count++;
	}
	count++;
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
