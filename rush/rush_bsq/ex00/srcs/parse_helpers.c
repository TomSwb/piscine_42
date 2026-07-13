/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   parse_helpers.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 13:02:26 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/13 13:02:28 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

char	*ft_strjoin(char *temp, char *buffer)
{
	int	i;
	int	j;
	int	len;
	char	*res;
	
	i = 0;
	len = ft_strlen_n(buffer) + ft_strlen(temp);
	res = malloc(sizeof(char) * (len + i + 1));
	if (!res)
		return (NULL);
	while(temp[i])
	{
		res[i] = temp[i];
		i++;
	}
	j = 0;
	while (buffer[j])
	{
		res[i] = buffer[j];
		j++;
		i++;
	}
	res[i] = '\0';
	free(temp);
	return (res);
}

int	ft_check(struct s_map *map)
{
//	int	i;
	
	if (map->size <= 0)
		return (-1);
	if (map->empty == map->obst || map->empty == map->full)
		return (-1);
	if (map->obst == map->full)
		return (-1);
//	i = 0;
//	while (map->map[i])
//	{
//		if ((map->map[i] != map->obst)
//			|| (map->map[i] != map->empty))
//			return (-1);
//		i++; 
//	}
	return (0);
}

int	ft_size(char *buffer)
{
	int	size;
	int	i;
	int	sign;
	
	size = 0;
	i = 0;
	sign = 1;
	if (buffer[0] == '-')
	{
		sign = -sign;
		i++;
	}
	while (buffer[i] >= '0' && buffer[i] <= '9')
	{
		size = (size * 10) + (buffer[i] - '0');
		i++;
	}
	printf("%d", size);
	return (size * sign);
}

char	ft_empty(char *buffer)
{
	int	i;
	char	empty;
	
	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	empty = buffer[i];
	printf("%c", empty);
	return (empty);
}

char	ft_obst_full(char *buffer, char previous)
{
	int	i;
	char	current;
	
	i = 0;
	while (buffer[i] != previous && buffer[i])
		i++;
	i++;
	current = buffer[i];
	printf("%c", current);
	return (current);
}

int	ft_len_buffer(char *buffer, int i)
{
	int	len;
	
	len =  0;
	while (buffer[i])
	{	
		if (buffer[i] == '\n')
			len++;
		i++;
	}
	return (len);
}

int	ft_strlen_n(char *buffer)
{
	int	i;
	
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	return (i);
}

int	ft_strlen(char *buffer)
{
	int	i;
	
	i = 0;
	while (buffer[i])
		i++;
	return (i);
}
