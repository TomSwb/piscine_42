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
	int rows;
	int cols;
	char empty;
	char obst;
	char full;
	char **grid;
}	t_map;

//main


//bsq
int	ft_bsq(int fd);
void	ft_init_map(t_map *map);
void	ft_bsq_stdin(void);
void	ft_print(t_map *map);

//parsing
int	ft_parser(t_map *map, int fd);
int	ft_parse_first_line(t_map *map, char *temp);
int	ft_allocate_grid(t_map *map);
int	ft_parse_grid(t_map *map, char *temp);

//parse_utilities
char	*ft_read_file(int fd, char *temp);
char	*ft_read_first_line(char *temp);
int	ft_get_line(char *temp, char *line);
char	*ft_read_grid_line(char *temp, int start);

//parse_helper
char	*ft_strjoin(char *temp, char *buffer);
int	ft_strlen(char *buffer);
int	ft_strlen_n(char *buffer, int start);

//validate
int validate_map(t_map *map);


#endif
