/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:22:06 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/07 19:22:08 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char	*ft_putnbr_base(int nbr, char *base, char *converted, int last)
{
	int	baselen;

    baselen = ft_strlen(base);
    if (nbr >= baselen)
    {
        
    }
  
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


