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
	len = ft_strlen(buffer) + ft_strlen(temp);
	res = malloc(sizeof(char) * (len + 1));
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

int	ft_strlen(char *buffer)
{
	int	i;
	
	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

int	ft_strlen_n(char *buffer, int start)
{
	int	i;
	
	i = 0;
	while (i < start)
		i++;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	return (i);
}