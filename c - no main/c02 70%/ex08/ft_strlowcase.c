/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowcase.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 09:45:16 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/27 09:51:34 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Return the og string in lowercase
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
