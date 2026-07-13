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

typedef struct	s_map 
{
	int size;
	char empty;
	char obst;
	char full;
	char **map;
}	t_map;

//main
void	ft_print(struct s_map *map);

//parsing
int	ft_parse_each_file(char *av, struct s_map *map);
struct s_map	*ft_parse_in_struct(char *buffer, struct s_map *map);
char	**ft_map_parsing(char *buffer, int i);
char	*ft_dup(char *buffer, int i;);

//parse_helper
char	*ft_strjoin(char *temp, char *buffer);
int	ft_check(struct s_map *map);
int	ft_size(char *buffer);
char	ft_empty(char *buffer);
char	ft_obst_full(char *buffer, char previous);
int	ft_len_buffer(char *buffer, int i);
int	ft_strlen(char *buffer);
int	ft_strlen_n(char *buffer);

#endif
