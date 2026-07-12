/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 09:56:54 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 19:50:57 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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

int	ft_strcmp(char *num, char *key)
{
	while (*num && *num == *key)
	{
		num++;
		key++;
	}
	return (*num - *key);
}

long long	ft_strlen(char *num)
{
	long long	i;
	
	i = 0;
	while (num[i] != '\0')
		i++;
	return (i);
}

char *ft_power_str(long long str_len)
{
	char	*power_str;
	int		i;

	power_str = (char *)malloc(sizeof(char) * (str_len+1));
	if (!power_str)
		return (NULL);
	power_str[0] = '1';
	i = 1;
	while (str_len--)
		power_str[i++] = '0';
	power_str[i] = '\0';
	return (power_str);
}

long long	ft_power(long long nb, long long power)
{
	long long	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}
char *ft_itoa(long long num)
{
	long long i;
	long long count;
	long long	nbr;
	char *result;

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
	int count;	
	
	count = 0;
	while (num > 0)
	{
		count ++;
		num /= 10;
	}
	return (count);
}