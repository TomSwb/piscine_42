/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 09:45:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/27 09:50:54 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
Return the og string in lowercase
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	result[] = "hELLO wORLD!";

	printf("%s", ft_strlowcase(result));
	return (0);
}
