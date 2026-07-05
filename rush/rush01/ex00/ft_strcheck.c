/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcheck.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: hechin <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/04 14:04:39 by hechin         #+#    #+#                */
/*   Updated: 2026/07/04 16:22:12 by hechin         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Does an init check on the given string to validate it
*/
int	ft_strlen(char *str);

int	ft_strcheck(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (0);
		}
		else
		{
			if (str[i] != 32)
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (len != 31)
		return (0);
	return (1);
}
