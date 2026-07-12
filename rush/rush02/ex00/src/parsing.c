/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 10:47:45 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 20:46:53 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

struct s_dict	*ft_parsing(int file, char *dict, int entry)
{
	char	buffer[4096];
	t_dict	*diction;
	int		count;
	int		reading;
	int		flag;

	flag = 0;
	entry = 0;
	count = ft_count_entry(dict);
	diction = malloc(sizeof(struct s_dict) * (count + 1));
	if (!(diction))
		return (NULL);
	reading = read(file, buffer, 4096);
	if (reading == -1)
		ft_error(2);
	buffer[reading] = '\0';
	if (ft_parse(diction, buffer, flag, entry) == NULL)
		return (NULL);
	return (diction);
}

struct s_dict	*ft_parse(t_dict *dict, char *buffer, int flag, int entry)
{
	int	i;

	i = -1;
	while (buffer[++i] != '\0')
	{
		if (buffer[i] == '\n')
			flag = 1;
		if (flag == 0)
		{
			dict[entry].key = ft_find_key(buffer, i);
			dict[entry].value = ft_find_value(buffer, i);
			if (dict[entry].key != NULL)
			{
				entry++;
				flag = 1;
			}
			else
				return (NULL);
		}
		if (buffer[i] == '\n')
			flag = 0;
	}
	dict[entry].key = '\0';
	dict[entry].value = '\0';
	return (dict);
}

char	*ft_find_key(char *buffer, int i)
{
	char	*num;
	int		start;
	int		size;
	int		j;
	int		check;

	size = 0;
	check = ft_check_find_key(buffer, i);
	if (check == 0)
		return (NULL);
	while (buffer[i] == ' ' || buffer[i] == '\n')
		i++;
	start = i;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	size = i - start;
	num = malloc(sizeof(char *) * (size + 1));
	if (!(num))
		return (NULL);
	j = -1;
	while (++j < size)
		num[j] = buffer[start + j];
	num[size] = '\0';
	return (num);
}

char	*ft_find_value(char *buffer, int i)
{
	char	*value;
	int		start;
	int		end;
	int		j;

	while (buffer[i] && buffer[i] != ':')
		i++;
	if (buffer[i] == ':')
		i++;
	while (buffer[i] == ' ')
		i++;
	start = i;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	end = i;
	value = malloc(sizeof(char *) * ((end - start) + 1));
	if (!(value))
		return (NULL);
	j = 0;
	while (start < end)
		value[j++] = buffer[start++];
	value[j] = '\0';
	return (value);
}
