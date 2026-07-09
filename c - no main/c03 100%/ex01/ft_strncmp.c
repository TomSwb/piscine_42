/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 08:59:18 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 19:48:23 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Compares two strings of char, when reaching a char in s2 that is diff to the 
char at same index in s1, returns the difference of the ASCII value
Only check up to the index chosen through n, if s1 & s2 differ & > n, n = 0
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
