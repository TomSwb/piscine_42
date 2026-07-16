/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 19:02:11 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 19:25:50 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns if the char are lowercase or not
*/
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
