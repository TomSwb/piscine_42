/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 13:47:23 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/26 12:25:07 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

/*
strncpy copies a string from one array to another,
but stopping at the indicated index and adding null symbol
if array of dest is longer than string
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

int	main(void)
{
	char	dest[40];
	char	i;
	char	n;

	i = 0;
	n = 30;
	ft_strncpy(dest, "Hello", n);
	while (i < n)
	{
		if (dest[i] != '\0')
			write(1, &dest[i], 1);
		else
			write(1, "/0", 2);
		i++;
	}
	return (0);
}
