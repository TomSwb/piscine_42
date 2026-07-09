/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_prime.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 12:35:44 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 12:59:54 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns if a given number is prime or not
*/

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= (nb / 2) && flag == 1)
	{
		i++;
		if (nb % i == 0)
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}
