/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 09:10:06 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 09:21:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Copies a string from an array to another in the heap instead of stack memory
using malloc to secure it.
*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		index;

	index = 0;
	while (src[index])
		index++;
	dup = malloc(sizeof(char) * index + 1);
	if (dup == NULL)
		return (NULL);
	index = 0;
	while (src[index])
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
