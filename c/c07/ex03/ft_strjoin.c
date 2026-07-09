/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strjoin.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/03 13:02:39 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/03 13:06:57 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_total_len(char **strs, int size, char *sep);
int		ft_strlen(char *src);
char	*ft_strcat(char *src, char *dest);

int	main(void)
{
	char	*str;
	char	*argv[5] = {"Hello", "World", "how", "are", "you?"};

	str = ft_strjoin(5, argv, "--");
	printf("%s\n", str);
	free(str);
	return (0);
}

/*
Joins the given strings into 1 seperated by the given seperator
*/
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	char	*error;
	int		total_len;
	int		i;

	i = 0;
	error = malloc(sizeof(char) * 1);
	error[0] = 0;
	if (size <= 0)
		return (error);
	total_len = ft_total_len(strs, size, sep);
	dest = malloc(sizeof(char) * (total_len + 1));
	if (dest == NULL)
		return (0);
	dest[0] = 0;
	while (i < size)
	{
		ft_strcat(strs[i], dest);
		i++;
		if (i < size)
			ft_strcat(sep, dest);	
	}
	return (dest);
}

/*
Gets the final length needed to malloc dest
*/
int	ft_total_len(char **strs, int size, char *sep)
{
	int		i;
	int		total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
		if (i < size)
			total_len += ft_strlen(sep);
	}
	return (total_len);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
Concatenate the strings and sep
*/
char	*ft_strcat(char *src, char *dest)
{
	int	lin;
	int	index;

	lin = 0;
	index = 0;
	while (dest[index] != 0)
		index++;
	while (src[lin])
	{
		dest[index + lin] = src[lin];
		lin++;
	}
	dest[index + lin] = 0;
	return (dest);
}
