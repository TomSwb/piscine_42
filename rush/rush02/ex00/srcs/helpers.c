/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 09:56:54 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/11 10:58:14 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_checkchar(char *num)
{
	int	i;
	
	i = 0;
	while (num[i])
	{
		if ((num[i] < 48) || (num[i] > 57))
			return (1);
		i++;
	}
	return (0);
}
