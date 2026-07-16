/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:44:41 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/16 10:00:09 by tschwab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_solved
{
	int			max_size;
	int			max_i;
	int			max_j;
	int			**dp;
}				t_solved;

typedef struct s_map
{
	int			rows;
	int			cols;
	char		empty;
	char		obst;
	char		full;
	char		**grid;
	t_solved	*sol;
}				t_map;

//main
int				extend_main(int *fd, char *av);

// bsq
int				ft_bsq(int fd);
void			ft_init_map(t_map *map);
void			ft_print(t_map *map, int fd);
void			ft_putstr(char *str);

// parsing
int				ft_parser(t_map *map, int fd);
int				ft_parse_first_line(t_map *map, char *temp);
int				ft_allocate_grid(t_map *map);
int				ft_parse_grid(t_map *map, char *temp, int start, int i);
int				count_line_return(char *s);

// parse_utilities
char			*ft_read_file(int fd, char *temp);
char			*ft_read_first_line(char *temp);
int				ft_get_line(char *temp, char *line);
char			*ft_read_grid_line(char *temp, int start);
int				ft_check_first_line(t_map *map);

// parse_helper
char			*ft_strjoin(char *temp, char *buffer, int i, int j);
int				ft_strlen(char *buffer);
int				ft_strlen_n(char *buffer, int start);
int				ft_check(t_map *map);
void			ft_strcpy(char *dest, char *src);

// validate
int				ft_validate_map(t_map *map);
int				ft_validate_rows_length(t_map *map);
int				ft_validate_chars(t_map *map);

// solver
int				ft_solver(t_map *map);
int				ft_find_biggest_square(t_map *map);
void			ft_fill_square(t_map *map);

// solver_utilities
int				ft_allocate_dp(t_map *map);
int				ft_min(int a, int b, int c);

// free
int				ft_free(t_map *map, int err);
void			ft_free_extend(t_map *map);

#endif
