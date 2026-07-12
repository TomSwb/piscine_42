/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:24:37 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/12 15:49:14 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

int	ft_count_entry(char *dict)
{
	int		file;
	ssize_t	reading;
	char	buffer[4096];
	int		count;
	int		i;

	count = 0;
	file = open(dict, 0);
	if (file == -1)
		ft_error(2);
	reading = read(file, buffer, 4096);
	while (reading > 0)
	{
		i = -1;
		while (++i < reading)
		{
			if (buffer[i] == ':')
				count++;
		}
		reading = read(file, buffer, 4096);
	}
	if (reading == -1)
		ft_error(2);
	close(file);
	return (count);
}

int	ft_check_find_key(char *buffer, int i)
{
	int j;
	
	j = i;
	while (buffer[i] != ':')
	{
		if (!(buffer[j] >= 48 && buffer[j] <= 57))
			return(0);
		if (!((buffer[i] >= 48 && buffer[i] <= 57) || buffer[i] == 32))
			return(0);
		i++;
	}
	return (1);
}
