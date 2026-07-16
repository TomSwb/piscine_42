/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 09:49:45 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 12:03:08 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_inter(char *src, char *charset);
int	ft_charcheck(char src, char *charset);
int	ft_strlen(char *src);
void	ft_putstr(char *dest);

int	main(void)
{
	char	*src = "Hello World how are you";
	char	*charset = "olleH";

	ft_inter(src, charset);
	return (0);
}

void	ft_inter(char *src, char *charset)
{
	char	*dest;
	int		i;
	int		j;
	int		k;

	dest = malloc(sizeof(char) * ft_strlen(charset) + 1);
	i = 0;
	j = 0;
	k = 0;
	while (src[j])
	{
		while (src[j] && !ft_charcheck(src[j], charset) && charset[i])
			i++;
		if (ft_charcheck(src[j], charset))
		{
			if (!(ft_charcheck(src[j], dest)))
			{	
				dest[k] = src[j];
				k++;
			}
		}
		j++;
	}
	dest[k] = '\0';
	ft_putstr(dest);
	free(dest);
}

int	ft_charcheck(char src, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == src)
			return (1);
		i++;
	}
	return (0);
}


int	ft_strlen(char *src)
{
	int	i;

    i = 0;
	while (src[i])
		i++;
	return (i);
}

void	ft_putstr(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
}