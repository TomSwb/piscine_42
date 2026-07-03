/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 16:03:38 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 16:24:31 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[40] = "World";
	char	src[] = "Hello";
	unsigned int n = 9;
	
	printf("%s", strncat(dest, src , n));
	return (0);
}

/*
Appends max n char of src in dest ensuring null is placed when src >= n
*/
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j >= n)
		dest[i + 1] = '\0';
	return (dest);	
}
