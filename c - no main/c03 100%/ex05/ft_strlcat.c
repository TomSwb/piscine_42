/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/30 11:40:35 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/30 11:52:44 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str);

/*
Returns the final length of dest after having concat src into it up to 
the given size
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tdest;
	unsigned int	tsrc;

	j = 0;
	i = ft_strlen(dest);
	tdest = ft_strlen(dest);
	tsrc = ft_strlen(src);
	if (size <= tdest)
		return (size + tsrc);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tdest + tsrc);
}

unsigned int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
