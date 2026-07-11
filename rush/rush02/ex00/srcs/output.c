/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   output.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: tschwab <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/07/11 14:22:39 by tschwab        #+#    #+#                */
/*   Updated: 2026/07/11 14:22:41 by tschwab        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_output(struct *dict, char **decompt_num)
{
	


}

char	**ft_decomp(char *num)
{
	int	i;
	int	col;
	int	lin;
	int	up;
	char	**tab;
		
	i = 0;
	while (num[i])
		i++;
	tab = malloc(sizeof(char *) * (i + 1);
	if (!(tab))
		return (NULL);
	lin = i;
	i--;
	col = 0;
	up = 0;
	while (i >= 0)
	{
		tab[lin][col] = num[i];
		col++;
		i--;
		if (col == 1 && up == 0)
		{	
			lin--;
			col = 0;
			up = 1;
			continue ;
		}
		tab[lin][col] = 0;
		col++;
		else if	(col == 2 && up == 1)
			
			lin--;
			col = 0;
			up = 2;
			continue ;
		}
		tab[lin][col] = 0;
		col++;
		else if (col == 3 && up == 2)
		{	
			lin--;
			col = 0;
			up == 0;
			continue ;
		}	
	}
	return (tab);
}
