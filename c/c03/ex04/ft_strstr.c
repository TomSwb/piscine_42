/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/29 16:31:01 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/29 16:39:39 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "awewqfqefqw";
	char	needle[] = "q";

	printf("%s", ft_strstr(haystack, needle));
//	printf("%s", (strstr(haystack, needle)));
	return (0);	
}
/*
Returns null if no array of value to find is found
Return the orginal array if no match is found with the comp array
Returns the original array starting at the index indicated by the matching value
if the arrayof matching value is found
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return(str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i+j] 
			&& to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);	
}
