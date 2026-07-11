/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 09:57:04 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 09:57:06 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush-02.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (-1);
	else if (ac == 2)
		ft_simple_conv(av[1]);
	else if (ac == 3)
		ft_custom_conv(av[1], av[2]);
	else
		return (-1);
	return (0);
}	

int	ft_simple_conv(char *num)
{
	int	file;
	char	*dict = "num.dict";
	
	if (ft_checkchar(num) == 1)
		ft_error(1);
	else
	{
		file = open(dict, 0);
		if (file == -1)
			ft_error(2);
		ft_parsing(file, dict);
		close(file);
//		if (file == -1)
//			ft_error(2); //return(-1);
	}
	return (0);
}

int	ft_custom_conv(char *num, char *dict)
{
	int	file;
	
	if (ft_checkchar(num) == 1)
		ft_error(1);
	else
	{
		file = open(dict, 0);
//		if (file == -1)
//			ft_error(2);
		ft_parsing(file, dict);
		close(file);
//		if (file == -1)
//			ft_error(2); //return(-1);
	}
	return (0);

}
