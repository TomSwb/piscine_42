/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:00:02 by tschwab           #+#    #+#             */
/*   Updated: 2026/07/06 15:00:03 by tschwab          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(num) ((num) % 2 == 0)

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int	t_bool;

#endif
