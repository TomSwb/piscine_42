/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:22:39 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 22:05:36 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_print_final_nbr(char *num, struct s_dict *array)
{
	int			i;
	int			j;
	char		*power;
	char		digit;

	i = 0;
	while (num[i] != '\0')
	{
		j = -1;
		power = ft_power_str(ft_strlen(num) - 1 - i);
		digit = num[i];
		while (array[++j].key)
		{
			if (ft_strcmp(&digit, array[j].key) == 0)
				ft_print_value(array[j].value);
			if (ft_strcmp(power, array[j].key) == 0 && ft_strlen(num) > 1)
				ft_print_value(array[j].value);
		}
		free(power);
		i++;
	}
	ft_putstr("\n");
}

void	ft_print_value(char *str)
{
	ft_putstr(str);
	ft_putstr(" ");
}
