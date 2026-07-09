/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 14:44:12 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/26 12:30:22 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
check if char are alphabet or not
*/
int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	i;

	i = 0;
	alpha = 1;
	while (str[i] != '\0' && alpha == 1)
	{
		if ((str[i] > 'A' && str[i] < 'Z')
			|| (str[i] > 'a' && str[i] < 'z'))
			alpha = 1;
		else
			alpha = 0;
		i++;
	}
	return (alpha);
}

int	main(void)
{
	int	result;

	result = ft_str_is_alpha("A");
	printf("%d", result);
	return (0);
}
