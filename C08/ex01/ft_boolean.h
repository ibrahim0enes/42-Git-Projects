/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 19:41:55 by ibcolak           #+#    #+#             */
/*   Updated: 2026/07/09 17:06:10 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

# define SUCCESS 0
# define EVEN(nbr) ((nbr) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
