/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atoi_base.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/01 17:30:18 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/01 17:49:52 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
//int		ft_atoi_base(char *str, char *base);
int		ft_check_base(char *base);
int   ft_char_check(char c, char *array);
/*
int	main(void)
{
	printf("%d\n", (ft_atoi_base("   451&vsd535", "k04123&78659")));
  printf("%d\n", (ft_atoi_base("    ---458vsd535", "0123456789abcdef")));
	printf("%d\n", (ft_atoi_base("    -+-pond535", "poneyvif")));
	printf("%d\n", (ft_atoi_base("    ---0458vsd535", "01")));
	printf("%d\n", (ft_atoi_base("    -+--458vsd535", "01223456779")));
	printf("%d\n", (ft_atoi_base("    --458vsd535", "012456789a+bcdef")));
	printf("%d\n", (ft_atoi_base("    --+-458vsd535", "pone-yvif")));
	printf("%d\n", (ft_atoi_base("    ---458vsd535", "5")));
	return (0);
}
*/
int	ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	result;
	int	i;
	int	j;

	i = 0;
	result = 0;
	baselen = ft_check_base(base);
 // printf("%d", baselen);
	if (baselen <= 1)
		return (result);
	j = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -j;
		i++;
	}
	while (str[i] && ft_char_check(str[i], base) != -1)
			{
				result = (result * baselen) + ft_char_check(str[i], base);
				str ++;
				}
	return (result * j);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '-') || (base[i] == '+')
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == 32 || base[i] == 127)
			return (0);
		i++;
	}
	i = 0;
	while (base[i + 1] != '\0')
	{
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
			j++;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	return (i + 1);
}

int	ft_char_check(char c, char *array)
{
	int	i;

	i = -1;
	while (array[++i])
	{
		if (c == array[i])
			return (i);
	}
	return (-1);
}
