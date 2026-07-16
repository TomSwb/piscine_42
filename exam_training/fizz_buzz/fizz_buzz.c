/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:53:41 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 17:01:55 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int num);
void    ft_putchar(char c);

int main(void)
{
    int num;

    num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else   
            ft_putnbr(num);
        write(1, "\n", 1);
        num++;
    }
}

void    ft_putnbr(int num)
{
    if( num >= 10)
    {
        ft_putnbr(num / 10);
        num %= 10;
    }
    ft_putchar(num + 48);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}