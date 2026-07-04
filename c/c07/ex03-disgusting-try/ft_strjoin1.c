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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_create_dest(int size, char **strs, char *sep);
char	*ft_join(int size, char **strs, char *sep, char *dest);
char	*ft_add_sep(int index, char *dest, char *sep);
int	ft_strlen(char *str);
/*
int	main(void)
{
	int		size = 5;
	char	**strs;
	char	*sep;
	
	printf("%s", (ft_strjoin(size, strs, "-")));
	return (0);
}
*/
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	
	if (size <= 0)
	{
		dest = malloc(0);
		return (dest);
	}
	dest = malloc(0);
	ft_create_dest(size, strs, sep);
	ft_join(size, strs, sep, dest);
	return (dest);
}

char	*ft_create_dest(int size, char **strs, char *sep)
{
	char	*dest;
	int		lin;
	int		index;
	
	lin = 0;
	index = 0;
	dest = malloc(index);
	while (lin <= size)
	{
		while (strs[lin])
		{
			index = index + ft_strlen(strs[lin]);
			index = index + ft_strlen(sep);
		}
		lin++;
	}
	dest = malloc(index - ft_strlen(sep));
	return (dest);
}

char	*ft_join(int size, char **strs, char *sep, char *dest)
{
	int		lin;
	int		cln;
	int		index;

	lin = 0;
	cln = 0;
	index = 0;
	while (lin < size)
	{
		while (strs[lin][cln])
		{
			dest[index] = strs[lin][cln];
			index++;
			cln++;
		}
		if (strs[lin][cln] == '\0' && lin != size - 1)
		{	
			ft_add_sep(index, dest, sep);
			index = index + ft_strlen(sep);
		}
		cln = 0;
		lin++;
		if (strs[lin] == NULL)
		{
			lin--;
			break ;
		}
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_add_sep(int index, char *dest, char *sep)
{
	int		sepdex;
	
	sepdex = 0;
	while (sep[sepdex])
	{
		dest[index] = sep[sepdex];
		index++;
		sepdex++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;
	
	index = 0;
	while (str[index])
		index++;
	return (index);
}
