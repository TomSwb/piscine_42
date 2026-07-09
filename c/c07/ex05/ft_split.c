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


char	**ft_split(char *str, char *charset);
int		ft_strcount(char *src, char *charset);
int		ft_charset(char c, char *charset);
char	*ft_copy_all_str(char *src, char *charset);

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**dest;
	int	i;
	char str[] = "a df a iehjn cc jdvnoi a duwerw abc ksdn cca owfdkvn";
	
	dest = ft_split(str, "ac");
	i = 0;
	while (dest[i])
	{
//		printf("%s\n", dest[i]);
		i++;
	}
	i = 0;
	while (dest[i])
	{
		free(dest[i]);
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
	int		i;
	int		j;

	final_dest = malloc(sizeof(char *) * (ft_strcount(str, charset) + 1));
	if (!final_dest)
		return (0);
	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && ft_charset(str[j], charset))
			j++;
		if (str[j])
		{
			final_dest[i] = ft_copy_all_str(str + j, charset);
			printf("%s\n", str + j);
			i++;
			while (str[j] && !ft_charset(str[j], charset))
				j++;
		}	
	}	
	final_dest[i] = 0;
	return (final_dest);
}

/*
Counts all the strings that will end in the final array
*/
int	ft_strcount(char *src, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (src[i])
	{
		while (src[i] && ft_charset(src[i], charset))
			i++;
		if (src[i])
			count++;
		while (src[i] && !ft_charset(src[i], charset))
			i++;
	}
	return (count);
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

char	*ft_copy_all_str(char *src, char *charset)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len] && !ft_charset(src[len], charset))
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
