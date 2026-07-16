/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:22:06 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 10:39:59 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base, int baselen);
int		ft_char_check(char c, char *array);
int		ft_int_len(int nbr, char *base, int count);
char	*ft_putnbr_base(int nbr, char *base, char *converted, int last);

/*
Converts an atoi given string into decimal accoding to a given base_from
into a new string defined by a given base_to 
*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		decimal;
	int		last;
	int		base_from_len;
	int		base_to_len;

	last = 0;
	decimal = 0;
	base_from_len = ft_check_base(base_from);
	base_to_len = ft_check_base(base_to);
	if ((base_from_len <= 1) || (base_to_len <= 1))
		return (0);
	decimal = ft_atoi_base(nbr, base_from, base_from_len);
	last = ft_int_len(decimal, base_to, 0);
	converted = malloc(sizeof(char *) * (last + 1));
	if (converted == NULL)
		return (0);
	converted = ft_putnbr_base(decimal, base_to, converted, last);
	converted[last] = '\0';
	return (converted);
}

/*
Check base
*/
int	ft_check_base(char *base)
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

/*
Does the convertion from char to decimal int according to base_from
*/
int	ft_atoi_base(char *str, char *base, int baselen)
{
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && ft_char_check(str[i], base) != -1)
	{
		result = (result * baselen) + ft_char_check(str[i], base);
		str ++;
	}
	return (result * sign);
}

/*
Checks if a char is part of the base_from or not to help convert in atoi_base
*/
int	ft_char_check(char c, char *array)
{
	int	i;

	i = -1;
	while (array[++i])
	{
		if (c == array[i])
			return (i);
	}
	return (-1);
}
