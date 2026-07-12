/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosjea <kgrosjea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 09:57:04 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/12 18:02:24 by kgrosjea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	else if (argc == 2)
		return (ft_parse_dict(argv[1], "numbers.dict"));
	else if (argc == 3)
		return (ft_parse_dict(argv[1], argv[2]));
	else
		return (-1);
	return (0);
}

int	ft_parse_dict(char *num, char *dict)
{
	int	file;
	struct s_dict	*array;

	if (ft_checkchar(num) == 1)
		return (ft_error(1));
	else
	{
		file = open(dict, 0);
		if (file == -1)
			return (ft_error(2));
		array = ft_parsing(file, dict, 0);
		if (array == NULL)
		{
			close(file);
			return (ft_error(2));
		}
		ft_print_final_nbr(num, array);
		close(file);
		free(array);
	}
	return (0);
}
