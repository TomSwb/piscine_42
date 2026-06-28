/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_printable.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 20:12:50 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 20:42:01 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	i;

	printable = 1;
	i = 0;
	while (str[i] != '\0' && printable == 1)
	{
		if (str[i] >= 32 && str[i] <= 126)
			printable = 1;
		else
			printable = 0;
		i++;
	}
	return (printable);
}

int	main(void)
{
	int	result;

	result = ft_str_is_printable("");
	printf("%d", result);
	return (0);
}
