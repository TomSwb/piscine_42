/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 09:34:10 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/27 09:42:08 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	result[] = "Hello World!";

	printf("%s" , ft_strupcase(result));
	return (0);
}
