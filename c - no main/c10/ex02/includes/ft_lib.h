/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lib.h                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 10:52:07 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 10:52:08 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <errno.h>
# include <unistd.h>
# include <libgen.h>
# include <fcntl.h>

void	ft_putstr(char *str, int outp);
int		ft_strcmp(char *av, char *s2);
int		ft_atoi(char *av);

void	ft_error_open(char *av);
void	ft_error_read(char *av);
void	ft_error_nbr(char *av);
void	ft_error_arg(char *av);

long	ft_count_total_size(char **av, int i);
void	ft_print_names(int ac, char **av, int i);
void	ft_display_file(char **av, int file, int i, int ignore);
int		ft_print(char **av, int i);

int		ft_pass_to_display(char **av, int ac, int i, int file);

#endif
