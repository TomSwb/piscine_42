/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 09:12:46 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 10:39:59 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_int_len(int nbr, char *base, int count);
int	ft_strlen(char *str);

/*
Converts the decimal obtained using base_from into a new string (char *)
based on the base_to base to use the correct char place at the desired indexes
*/
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
	return (converted);
}

/*
Returns the amount of space needed for the final array (-1 for the '\0' 
placed during the malloc) then also use this number to define at which index
the char converted inside putnbr_base will be placed.
*/
int	ft_int_len(int nbr, char *base, int count)
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
