/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lib.h                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/13 11:44:41 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/13 11:44:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct s_map {
	int size;
	char empty;
	char obst;
	char full;
	char **map;
} t_map;
