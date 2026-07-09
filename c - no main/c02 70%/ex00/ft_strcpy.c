/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 10:31:20 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/25 17:12:00 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
strcpy copies the string from one array to another inlcuding the final '\0'.
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
