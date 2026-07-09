/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_find_next_prime.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/02 13:02:37 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/02 13:05:08 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
/*
Returns the next prime of the given number including itslef if valid
*/

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb) == 1))
		nb++;
	return (nb);
}

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
