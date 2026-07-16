/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/06/27 10:03:57 by tschwab        #+#    #+#                */
/*   Updated: 2026/06/30 09:56:54 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Capitilize the first letter of each words in a string
(word is define by a chain of alphanumerical values)
start by lowering all cases then calls the actual capitalisation function
*/
char	*ft_upcase_first(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	ft_upcase_first(str);
	return (str);
}

char	*ft_upcase_first(char *str)
{
	int	capneed;
	int	i;

	i = 0;
	capneed = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && capneed == 1)
		{
			str[i] = str[i] - 32;
			capneed = 0;
		}
		if ((str[i] < 97 || str[i] > 122)
			&& (str[i] < 65 || str[i] > 90)
			&& (str[i] < 48 || str[i] > 57))
		{
			capneed = 1;
		}
		if (str[i] >= 48 && str[i] <= 57)
			capneed = 0;
		i++;
	}
	return (str);
}
