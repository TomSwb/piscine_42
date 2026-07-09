/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 18:13:52 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 18:18:55 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
count amount of char in string circulating through pointed array
*/

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "";
	printf("%d", (ft_strlen(str)));
	return (0);
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
