/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:22:06 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/07 19:22:08 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int		ft_check_base(char *base);
int		ft_atoi_base(char *str, char *base, int baselen);
int		ft_char_check(char c, char *array);
int		ft_digit_places(int nbr, char *base, int count);
char	*ft_putnbr_base(int nbr, char *base, char *converted, int last);

/*
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("1: %s\n", (ft_convert_base("   42&sd", "0123456789", "poneyvif")));
  	printf("2: %s\n", (ft_convert_base("    ---404vsd535", "4012356789", "01")));
	printf("3: %s\n", (ft_convert_base("    -+-pond535", "poneyvif", "0123456789")));
	printf("4: %s\n", (ft_convert_base("    ---11458vsd535", "01", "0123456789abcdef")));
	printf("5: %d\n", (ft_convert_base("    -+--458vsd535", "01223456779")));
	printf("6: %d\n", (ft_convert_base("    --458vsd535", "012456789a+bcdef")));
	printf("7: %d\n", (ft_convert_base("    --+-458vsd535", "pone-yvif")));
	printf("8: %d\n", (ft_convert_base("    ---458vsd535", "5")));
	return (0);
}
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
	last = ft_digit_places(decimal, base_to, 0);
	converted = malloc(sizeof(char *) * (last + 1));
	if (converted == NULL)
		return (0);
	converted = ft_putnbr_base(decimal, base_to, converted, last);
	converted[last] = '\0';
	return (converted);
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
