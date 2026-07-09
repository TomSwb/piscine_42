/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:18:11 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/08 09:18:13 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base);
int	ft_char_check(char c, char *array);

/*
Converts an atoi string into the decimal equivalent of the given base 
*/
int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	result;
	int	i;
	int	sign;

	i = 0;
	result = 0;
	baselen = ft_check_base(base);
	if (baselen <= 1)
		return (result);
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_char_check(str[i], base) != -1)
	{
		result = (result * baselen) + ft_char_check(str[i], base);
		str ++;
	}
	return (result * sign);
}

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
