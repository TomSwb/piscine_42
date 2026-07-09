/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 08:47:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 15:06:19 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Compares each char present in the same index of each array and returns 0 if all
are the same, a negative value if the ASCII value of s1 is higher than the one
of s2 and a positive value if its lower
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i])
		&& ((s1[i] != '\0')))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
