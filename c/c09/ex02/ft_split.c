/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:55:20 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/07 15:55:22 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strcount(char *src, char *charset);
int		ft_charset(char c, char *charset);
char	**ft_malloc_arr(char *src, char *charset, char **dest);
char	**ft_copy_all_str(char *src, char *charset, char **dest);


char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**dest;
	int	i;
	char str[] = "a df a iehjn cc jdvnoi a duwerw abc ksdn cca owfdkvn";
	
	dest = malloc(sizeof(char) * (100));
	
	dest = ft_split(str, "a");
	i = 0;
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
	free(dest);
	return (0);
}


/*
Splits the og strings according to the given seps all secured by malloc in heap
*/
char	**ft_split(char *str, char *charset)
{
	char	**final_dest;
	int		count;

	count = ft_strcount(str, charset);
	if (!count)
		return (0);
	final_dest = malloc(sizeof(char *) * (count + 1));
	if (!final_dest)
		return (0);
	final_dest = ft_malloc_arr(str, charset, final_dest);
	final_dest = ft_copy_all_str(str, charset, final_dest);
	return (final_dest);
}

/*
Counts all the strings that will end in the final array
*/
int	ft_strcount(char *src, char *charset)
{
	int	str;
	int	i;

	i = 0;
	str = 0;
	while (src[i])
	{
		while (src[i] && ft_charset(src[i], charset))
			i++;
		if (src[i] == '\0')
			return (0);
		str++;
		while (src[i] && !ft_charset(src[i], charset))
			i++;
	}
	return (str);
}

int	ft_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**ft_malloc_arr(char *src, char *charset, char **dest)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	while (src[i])
	{
		size = 0;
		while (src[i] && ft_charset(src[i], charset))
			i++;
		if (src[i] == '\0')
			return (0);
		while (src[i] && !ft_charset(src[i], charset))
		{
			size++;
			i++;
		}
		dest[j] = malloc(sizeof(char) * (size + 1));
		if (!dest)
			return (0);
		j++;
	}
	return (dest);
}

char	**ft_copy_all_str(char *src, char *charset, char **dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (src[i])
	{
		k = 0;
		while (src[i] && ft_charset(src[i], charset))
			i++;
		if (src[i] == '\0')
			return (0);
		while (src[i] && !ft_charset(src[i], charset))
		{
			dest[j][k] = src[i];
			i++;
			k++;
		}
		dest[j][k] = '\0';
		j++;
	}
	dest[j] = NULL;
	return (dest);
}
