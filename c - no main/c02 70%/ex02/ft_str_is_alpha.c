/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/25 14:44:12 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/26 08:44:12 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns if char are alphabet or not
*/
int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	i;

	i = 0;
	alpha = 1;
	while (str[i] != '\0' && alpha == 1)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			alpha = 1;
		else
			alpha = 0;
		i++;
	}
	return (alpha);
}
