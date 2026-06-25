/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 13:47:23 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 17:12:40 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
/*
strncpy copies a string from one array to another,
but stopping at the indicated index
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*dest[13];
	
	dest = "World";
	ft_strncpy(dest, "Hello", 40);
	printf("%s", dest);
	return (0);
}
*/
