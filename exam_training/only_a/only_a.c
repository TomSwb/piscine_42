/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:48:09 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 12:03:31 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (ac < 2)
        return (write(1, "a\n", 2));
    else if (ac == 2)
    {
        while (av[1][j])
        { 
            if (av[1][j] == 'a')
            {
                write(1, "a\n", 2);
                return (0);
            }
            j++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "a\n", 2);
    return (0);
}