/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/28 08:27:40 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/28 08:51:36 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns the total length of src after having copied src into dest
Ensure no buffer overflow
ensures dest ends with null even if truncated og string
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
