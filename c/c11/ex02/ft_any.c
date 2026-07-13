/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_any.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/10 08:00:37 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/10 08:00:39 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));
int	ft_charcheck(char *str);

int	main(void)
{
	char	*tab[6] = {"Hello", "World", "How", "are", "you", 0};
	
	printf("%d", ft_any(tab, ft_charcheck));
	return (0);
}

/*
Passes each entry of the array through a given funciton and return 1 if 
the given functions returns 1 for at least 1 entry or 0 if none returns 1
*/
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_charcheck(char *str)
{
	char	c;

	c = 'z';
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
