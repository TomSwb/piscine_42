/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcat.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 15:45:21 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 15:59:16 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[40] = "World";
	char	src[] = "Hello";
	
	printf("%s", ft_strcat(dest, src));
	return (0);
}
/*
Appends src at the end of dest and close with null
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
