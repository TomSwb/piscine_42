/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 19:02:11 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 19:12:11 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	lower;
	int	i;

	lower = 1;
	i = 0;
	while (str[i] != '\0' && lower == 1)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			lower = 1;
		else
			lower = 0;
		i++;
	}
	return (lower);
}

int	main(void)
{
	int	result;

	result = ft_str_is_lowercase("");
	printf("%d", result);
	return (0);
}
