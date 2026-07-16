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
Returns if the char are numbers or not
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
