/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 10:47:45 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/11 13:14:54 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

struct s_dict	*ft_parsing(int file, char *dict)
{
	ssize_t	reading;
	char	buffer[1024];
	t_dict	*diction;
	int	count;
	
	count = ft_count_entry(dict);
	diction = malloc(sizeof(struct s_dict) * (count + 1));
	if (!(diction))
		return (-1);
	reading = read(file, &buffer, 1);
	while (reading > 0)
	{
		ft_parse(diction, count);
		reading = read(file, &buffer, 1);
	}
	if (reading == -1)
		ft_error();
	return (dict);
}

int	ft_count_entry(char *dict)
{
	int		file;
	ssize_t	reading;
	char	buffer[1024];
	int	count;
	
	count = 0;
	file = open(dict, 0);
	if (file == -1)
		ft_error();
	reading = read(file, &buffer, 1);
	while (reading > 0)
	{
		if (reading == ':')
			count++;
		reading = read(file, &buffer, 1);
	}
	if (reading == -1)
		ft_error();
	close(file);
	if (file == -1)
		ft_error();
	return (count);
}

struct s_dict	*ft_parse(struct *dict, int count)
{
	int	i;
	
	i = 0;
	while (i < count)
	{
		dict[i].key = .....;
		dict[i].value = .....;
		i++;
	}
	dict[i].key = 0;
	return (dict);
}

char	*ft_get_key()
{

}

char	*ft_get_value()
{

}
