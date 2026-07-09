/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 08:37:55 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 09:22:58 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
count amount of char in string circulating through pointed array
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
