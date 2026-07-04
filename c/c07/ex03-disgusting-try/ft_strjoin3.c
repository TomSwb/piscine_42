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
char	*ft_create_dest(int size, char **strs);
char	*ft_join(int size, char **strs, char *sep, char *dest);
char	*ft_join_with_sep(char *dest, char **strs, char *sep, int lin, int size);

/*
int	main(void)
{
	char	*str;
	char *argv[5] = {"fel*ipe", "de", "paula", "alves", "montes"};
	
	str = ft_strjoin(5, argv, "--");
	printf("%s\n", str);
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
	ft_create_dest(size, strs);
	ft_join(size, strs, sep, dest);
	return (dest);
}

char	*ft_create_dest(int size, char **strs)
{
	char	*dest;
	int		lin;
	int		cln;
	int		index;
	
	lin = 0;
	cln = 0;
	index = 0;
	dest = malloc(index);
	while (lin < size)
	{
		while (strs[lin][cln++])
			index++;
		lin++;
		index++;
		if (strs[lin] == NULL)
		{	
			lin--;
			break ;
		}
	}
	dest = malloc(index);
	return (dest);
}

char	*ft_join(int size, char **strs, char *sep, char *dest)
{
	int		lin;

	lin = -1;
	while (++lin < size)
		ft_join_with_sep(dest, strs, sep, lin, size);
	return (dest);
}

char	*ft_join_with_sep(char *dest, char **strs, char *sep, int lin, int size)
{
	int	cln;
	int	index;
	int	sepdex;
	
	index = 0;
	sepdex = 0;
	cln = 0;
	while (strs[lin][cln])
	{
		dest[index] = strs[lin][cln];
		index++;
		cln++;
	}
	if (strs[lin][cln] == '\0' && lin != size - 1)
	{	
		while (sep[sepdex])
		{
			dest[index] = sep[sepdex];
			index++;
			sepdex++;
		}
		sepdex = 0;
		cln = 0;
	}
	return (dest);
}
