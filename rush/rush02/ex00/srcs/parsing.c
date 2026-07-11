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

void	ft_parsing(int file, char *dict)
{
	char	buffer[4096];
	t_dict	*diction;
	int	count;
	
	count = ft_count_entry(dict);
	diction = malloc(sizeof(struct s_dict) * (count + 1));
	if (!(diction))
		return ;
	if (read(file, buffer, 4096) == -1)
		ft_error(2);
	ft_parse(diction, buffer, count);
	
}

int	ft_count_entry(char *dict)
{
	int		file;
	ssize_t	reading;
	char	buffer[4096];
	int	count;
	int	i;
	
	count = 0;
	file = open(dict, 0);
	if (file == -1)
		ft_error(2);
	reading = read(file, buffer, 4096);
	i = 0;
	while (i < reading)
	{
		if (buffer[i] == ':')
			count++;
		i++;
	}
	printf("%d", count);
	if (reading == -1)
		ft_error(2);
	close(file);
	if (file == -1)
		ft_error(2);
	return (count);
}

struct s_dict	*ft_parse(t_dict *dict, char * buffer, int count)
{
	int	i;
	int entry;
	int	flag;
	
	i = 0;
	entry = 0;
	flag = 0;
	while (buffer[i])
	{
		if (flag == 0)
		{	
			dict[entry].key = ft_find_key(buffer, i);
			dict[entry].value = ft_find_value(buffer, i);
			flag = 1;
		}
		if (buffer[i] == '\n')
			flag = 0;
		i++;
		entry++;
	}
	dict[i].key = 0;
	return (dict);
}

char	*ft_find_key(char *buffer, int i)
{
	char	*num;
	int	size;
	int	j;
	
	size = 0;
	while (buffer[i] == ' ' || buffer[i] == '\n')
			i++;
	j = i;
	while (buffer[i] >= 48 && buffer[i] <= 57)
	{
		size++;
		i++;
	}
	num = malloc(sizeof(char) * (size + 1));
	if (!(num))
		return (NULL);
	i = 0;
	while (buffer[j] != ':')
	{
		if (buffer[j] != ' ' && buffer[j] != '\n')
		{
			num[i] = buffer[j];
			i++;
		}
		j++;
	}
	return (num);
}

char	*ft_find_value(char *buffer, int i)
{
	char	*value;
	int	size;
	int	j;
	
	size = 0;
	while (buffer[i] == ' ' || buffer[i] == '\n')
			i++;
	j = i;
	while (buffer[i] >= 97 && buffer[i] <= 122)
	{
		size++;
		i++;
	}
	value = malloc(sizeof(char) * (size + 1));
	if (!(value))
		return (NULL);
	i = 0;
	while (buffer[j] != '\n')
	{
		if (buffer[j] != ' ')
		{
			value[i] = buffer[j];
			i++;
		}
		j++;
	}
	return (value);
}
