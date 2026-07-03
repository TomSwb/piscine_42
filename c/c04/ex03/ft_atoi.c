/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 20:28:19 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 21:00:14 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d", (ft_atoi("   --++--+124ab567")));
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
		|| (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (j % 2 == 0)
		return (+result);
	return (-result);
}
