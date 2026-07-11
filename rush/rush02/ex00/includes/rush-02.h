/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 10:15:00 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/11 11:28:14 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

#include <unistd.h>
#include <stdlib.h>
#include <libgen.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

typedef struct s_dict
{
	char *key;
	char *value;
} t_dict;

int	ft_simple_conv(char *num);
int	ft_custom_conv(char *num, char *dict);

int	thous_pow(char *num);
int	ft_atoi (char str);
int	ft_checkchar(char *num);

void	ft_parsing(int file, char *dict);
struct s_dict	*ft_parse(t_dict *dict, char *buffer, int count);
int	ft_count_entry(char *dict);
char	*ft_find_key(char *buffer, int i);
char	*ft_find_value(char *buffer, int i);

void	ft_error(int error_code);

#endif
