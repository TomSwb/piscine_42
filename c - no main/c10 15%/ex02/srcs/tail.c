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

#include "../includes/ft_lib.h"

void	ft_display_file(char **av, int file, int i, int ignore)
{
	int			reading;
	int			readed;
	char		buffer[4096];

	if (ft_strcmp(av[1], "-c"))
	{
		readed = 0;
		while (readed < ignore)
		{
			reading = read(file, &buffer, 1);
			readed += reading;
		}
		if (readed == ignore)
		{
			while (reading > 0)
			{
				write(1, &buffer, 1);
				reading = read(file, &buffer, 1);
			}
			if (reading == -1)
				ft_error_read(av[i]);
		}
	}
	else
		ft_error_arg(av[i]);
}

void	ft_print_names(int ac, char **av, int i)
{
	if (ac > 4)
	{
		ft_putstr("==> ", 1);
		ft_putstr(av[i], 1);
		ft_putstr(" <==\n", 1);
		i++;
	}
}

long	ft_count_total_size(char **av, int i)
{
	int			file;
	int			reading;
	long		size;
	char		buffer[4096];

	size = 0;
	file = open(av[i], 0);
	if (file == -1)
		ft_error_open(av[i]);
	else
	{
		reading = read(file, &buffer, 1);
		while (reading > 0)
		{
			size++;
			reading = read(file, &buffer, 1);
		}
		if (reading == -1)
			ft_error_read(av[i]);
	}
	return (size);
}

int	ft_print(char **av, int i)
{
	ssize_t	reading;
	char	buffer[4096];

	reading = read(0, &buffer, 1);
	while (reading > 0)
		reading = read(0, &buffer, 1);
	if (reading == -1)
		ft_error_read(av[i]);
	return (1);
}
