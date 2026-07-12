/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:22:39 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 19:56:59 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

void	ft_print_final_nbr(char *num, struct s_dict *array)
{
	int	i;
	char *power;
	int	j;
	char digit;
	long long str_len;

	i = 0;
	j = 0;
	while (num[i])
	{	
		str_len = ft_strlen(num);
		power = ft_power_str(str_len-1-i);
		digit = num[i];
		while (array[j].key)
		{
			if  (ft_strcmp(&digit, array[j].key) == 0)
			{
				ft_putstr(array[j].value);
				ft_putstr(" ");
			}
			if  (ft_strcmp(power, array[j].key) == 0  && str_len > 1)
			{
				ft_putstr(array[j].value);
				ft_putstr(" ");
			}
			j++;
		}
		j = 0;
		free(power);
		i++;
	}
	
}

/*
temporary:

			

*/
