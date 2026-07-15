/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_advanced_sort_string_tab.c                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/14 17:22:07 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/14 17:22:10 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

/*
Sort the array by swapping the addresses according to the result of
given function
*/
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*temp;
	int		i;
	int		len;

	len = 0;
	while (tab[len])
		len++;
	len--;
	i = 0;
	while (i < len)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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
