/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 19:29:43 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 19:36:51 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
/*
Return if char is uppercase or not
*/
int	ft_str_is_uppercase(char *str)
{
	int	upper;
	int	i;

	upper = 1;
	i = 0;
	while (str[i] != '\0' && upper == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper = 1;
		else
			upper = 0;
		i++;
	}
	return (upper);
}

/*
int	main(void)
{
	int	result;

	result = ft_str_is_uppercase("");
	printf("%d", result);
	return (0);
}
*/
