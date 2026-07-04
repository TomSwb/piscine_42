/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:08:53 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/04 11:09:51 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
write a character
*/
void	ft_putnubr(char c)
{
	write(1, &c, 1);
}

void	ft_putspace(void)
{
	write(1, " ", 1);
}
