/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 13:47:23 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 21:19:54 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
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
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	dest[50];
	int	i;
	int	n;

	n = 2;
	ft_strncpy(dest, "Hello", n);
	i = 0;
	while (i != n)
	{
		if (dest[i] != '\0')
			write(1, &dest[i], 1);
		else
			write(1, "/0", 2);
		i++;
	}
	return (0);
}
*/
