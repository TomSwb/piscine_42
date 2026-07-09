/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/09 19:00:41 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/09 19:00:42 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_print(char **av, int i);
int	ft_display_file(char **av, char *fd, int i);
void	ft_putstr(char *str, int outp);
int	ft_strcmp(char *av);
int	ft_error(int errnum, char **av, int i);
int	ft_print(char **av, int i);

int	main(int ac, char *av[])
{
	int	i;
	
	i = 1;
	if (ac == 1)
		if (!ft_print(av, i))
			return (-1);
	if (ac >= 2)
	{
		while (i < ac)
		{
			ft_display_file(av, av[i], i);
			i++;
		}
	}
	return (0);
}


