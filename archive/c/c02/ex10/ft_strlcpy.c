/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 08:27:40 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/28 08:44:51 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	if (dest > 0)
	{
		while (src[len] != '\0')
		{
			if (len == size)
			{
				len--;
				break ;
			}
			dest[len] = src[len];
			len++;
		}
	}
	dest[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
//	while (src[i] != '\0')
//	{
//		dest[i] = src[i];
//		i++;
//		len++;
//	}
//	if (size != 0 && dest[i] != size) 
//	{
//			dest[i] = '\0';
//			i++;
//	}
//	return (len);

int	main(void)
{
	char	src[] = "Hello world!";
	char	dest[13];
	char	result;
	char	resultorg;
	char	size;

	size = 13;
	result = ft_strlcpy(dest, src, size);
	printf("Mine: copied '%s', into '%s', length '%d\n'", src, dest, result);
//	resultorg = strlcpy(dest, src, size);
//	printf("OG: copied '%s', into '%s', length '%d\n'", src, dest, result);
	return (0);
}
