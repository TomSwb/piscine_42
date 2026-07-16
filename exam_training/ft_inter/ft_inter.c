/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 09:49:45 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 09:56:12 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_inter(char *src, char *charset);

int main(void)
{
    char    *src = "Hello World how are you";
    char    *charset = "hoau";

    ft_inter(src, charset);
    return (0);
}

void    ft_inter(char *src, char *charset)
{
    char    *dest;

    dest = malloc(sizeof(char) * ft_strlen(charset) + 1);

}

int ft_strlen(char *src)
{
    int i;

    int 
    i = 0;
}