/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 08:59:18 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 19:47:37 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
Compares two strings of char, when reaching a char in s2 that is diff to the 
char at same index in s1, returns the difference of the ASCII value
Only check up to the index chosen through n
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (((s1[i] == s2[i]) && (s1[i] != '\0') && i < (n-1)))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	result;
	char	s1[] = "helloom";
	
	char	s2[] = "hellooo";

	result = ft_strncmp(s1, s2, 7);
	printf("%d", result);
	return (0);
}
