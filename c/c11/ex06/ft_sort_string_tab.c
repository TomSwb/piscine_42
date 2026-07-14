/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_string_tab.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 08:44:06 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/14 08:44:07 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*tab[6] = {"World ", "How ", "you ", "are ", "Hello ", 0};
	int	i;
	int	length = 6;
	
	i = 0;
	ft_sort_string_tab(tab);
	while (i < length)
	{
		printf("%s", tab[i]);
		i++;
	}
	return (0);
}

/*
Sort the array by swapping the addresses.
*/
void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int	i;
	int	len;
	
	len = 0;
	while (tab[len])
		len++;
	len--;
	i = 0;
	while (i < len) 
	{
		printf("%d\n", ft_strcmp(tab[i], tab[i + 1]));
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else 
			i++;
	}	
}


int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
