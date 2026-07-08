/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/08 14:42:11 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/08 19:05:02 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *fd);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!ft_display_file(argv[1]))
			return (write(2, "Cannot read file.\n", 18), 1);
	}
	else
	{
		if (argc < 2)
			return (write(2, "File name missing.\n", 19), 1);
		if (argc > 2)
			return (write(2, "Too many arguments.\n", 20), 1);
	}
	return (0);
}

int	ft_display_file(char *fd)
{
	int		reading;
	int		file;
	char	buffer;

	file = open(fd, 0);
	if (file == -1)
		return (0);
	reading = read(file, &buffer, 1);
	while (reading > 0)
	{
		write(1, &buffer, 1);
		reading = read(file, &buffer, 1);
	}
	if (reading == -1)
			return (0);
	close(file);
	return (1);
}
