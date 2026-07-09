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
/*
Return the the first serie of number found in the array after cleaning
up the isspace char and counting the - 
to make the number negative or not accordingly
*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
