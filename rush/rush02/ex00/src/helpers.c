/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 09:56:54 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 20:46:45 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

int	thous_pow(char *num)
{
	int	len;
	int	count;
	int	thou_pow;

	len = 0;
	count = 0;
	thou_pow = 0;
	while (num[len])
		len++;
	len--;
	while (len > 0)
	{
		count++;
		if (count / 3 == 0)
			thou_pow++;
		len--;
	}
	return (thou_pow);
}

char	*ft_power_str(long long str_len)
{
	char	*power_str;
	int		i;

	power_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!power_str)
		return (NULL);
	power_str[0] = '1';
	i = 1;
	while (str_len--)
		power_str[i++] = '0';
	power_str[i] = '\0';
	return (power_str);
}

char	*ft_itoa(long long num)
{
	char		*result;
	long long	i;
	long long	count;
	long long	nbr;

	count = ft_digit_count(num);
	nbr = num;
	i = count - 1;
	result = malloc(sizeof(char) * (count + 1));
	if (!(result))
		return (NULL);
	while (i >= 0)
	{
		result[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	result[count] = '\0';
	return (result);
}

int	ft_digit_count(int num)
{
	int	count;	

	count = 0;
	while (num > 0)
	{
		count ++;
		num /= 10;
	}
	return (count);
}
