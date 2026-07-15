/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 12:10:25 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/15 12:24:49 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int last;
    
    i = 0;
    last = 0;
    if (ac < 2)
        write(1, "\n", 1);
    else
    {
        while (av[last] != NULL)
            last++;
        last--;
        while (av[last][i])
        {   
            write(1, &av[last][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}