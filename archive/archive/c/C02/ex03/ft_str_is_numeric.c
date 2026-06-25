/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 18:07:55 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 18:22:06 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
/*
Check if char are numbers
*/
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i] != '\0' && num == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
			num = 1;
		else
			num = 0;
		i++;
	}
	return (num);
}

/*
int	main(void)
{
	int	result;

	result = ft_str_is_numeric("090090931241414dasds9");
	printf("%d", result);
	return (0);
}
*/
