/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 10:15:00 by kgrosjea          #+#    #+#             */
/*   Updated: 2026/07/12 22:04:56 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <fcntl.h>
# include <libgen.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_dict
{
	char		*key;
	char		*value;
}				t_dict;

//main
int				ft_parse_dict(char *num, char *dict);

//helpers
int				thous_pow(char *num);
char			*ft_power_str(long long str_len);
char			*ft_itoa(long long num);
int				ft_digit_count(int num);

//utilities
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *num, char *key);
long long		ft_strlen(char *num);

//parsing
struct s_dict	*ft_parsing(int file, char *dict, int entry);
struct s_dict	*ft_parse(t_dict *dict, char *buffer, int flag, int entry);
char			*ft_find_key(char *buffer, int i);
char			*ft_find_value(char *buffer, int i);

//check
int				ft_count_entry(char *dict);
int				ft_check_find_key(char *buffer, int i);

//error
int				ft_error(int error_code);
int				ft_checkchar(char *num);
int				ft_char_is_numeric(char c);

//output
void			ft_print_final_nbr(char *num, struct s_dict *array);
void			ft_print_value(char *str);

#endif
