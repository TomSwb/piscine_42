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

#include "..includes/ft_lib.h"

int	ft_size(char *buffer)
{
	int	size;
	int	i;
	
	size = 0;
	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
	{
		size = (size * 10) + (buffer[i] - '0');
		i++;
	}
	return (size);
}

char	ft_empty(char *buffer)
{
	int	i;
	char	empty;
	
	i = 0;
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	empty = buffer[i];
	return (empty);
}

char	ft_obst(char *buffer, char empty)
{
	int	i;
	char	obst;
	
	i = 0;
	while (buffer[i] != &empty)
		i++;
	i++;
	obst = buffer[i];
	return (obst);
}

char	ft_obst(char *buffer, char obst)
{
	int	i;
	char	full;
	
	i = 0;
	while (buffer[i] != &obst)
		i++;
	i++;
	full = buffer[i];
	return (full);
}

int	ft_len_buffer(char *buffer, int i)
{
	int	len;
	
	len =  0;
	while (buffer[i])
	{	
		len++;
		i++;
	}
	return (len);
}
