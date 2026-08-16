/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 15:03:20 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/16 16:37:05 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_calloc_zero_case(void)
{
	void	*empty;

	empty = malloc(1);
	if (!empty)
		return (NULL);
	return (empty);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*block;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (ft_calloc_zero_case());
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	block = malloc(total);
	if (!block)
		return (NULL);
	ft_bzero(block, total);
	return (block);
}
