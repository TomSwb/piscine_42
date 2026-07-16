/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:50:44 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 14:14:34 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);
int		ft_int_len(long long num);

int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}

char	*ft_itoa(int nbr)
{
	char		*dest;
	int			i ;
	int			len;
	long long	num;		
	int			sign;

	num = nbr;
	len = ft_int_len(num);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	sign = 0;
	if (num < 0)
	{
		dest[0] = '-';
		sign = 1;
		num = -num;
	}
	i = len - 1;
	while (i >= sign)
	{
		dest[i--] = num % 10 + '0'; 
		num /= 10;
	}
	dest[len] = '\0';
	return (dest);
}


int		ft_int_len(long long num)
{
	int		count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}