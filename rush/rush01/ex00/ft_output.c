/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:49:00 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 16:49:09 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		write(1, " ", 1);
		if (i == 3 || i == 7 || i == 11 || i == 15)
		{
			write(1, "\n", 1);
		}
		i++;	
	}	
}


int	main(void)
{
	char	str[] = "1234234134124123";

	ft_putstr(str);
	return (0);


}
