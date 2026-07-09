/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_cat.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 15:05:32 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 15:05:34 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int	ft_error(int errnum, char **av, int i);
void	ft_putstr(char *str, int outp);
int	ft_strcmp(char *av);

int	ft_print(char **av, int i)
{
	ssize_t		reading;
	char	buffer[28672];
	
	reading = read(0, &buffer, 1);
	while (reading > 0)
	{
		ft_putstr(buffer, 1);
		reading = read(0, &buffer, 1);
	}
	if (reading == -1)
	{
		ft_error(errno, av, i);	
		return (-1);
	}
	return (1);
}

int	ft_display_file(char **av, char *fd, int i)
{
	int		file;
	ssize_t		reading;
	char	buffer[28672];

	file = open(fd, 0);
	if (file == -1)
	{
		ft_error(errno, av, i);	
		return (-1);
	}
	reading = read(file, &buffer, 1);
	while (reading > 0)
	{
		ft_putstr(buffer, 1);
		reading = read(file, &buffer, 1);
	}
	if (reading == -1)
	{
		ft_error(errno, av, i);	
		return (-1);
	}
	close(file);
	if (file == -1)
	{
		ft_error(errno, av, i);	
		return (-1);
	}
	return (1);
}
