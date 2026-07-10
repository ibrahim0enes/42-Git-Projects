/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:36:51 by ibcolak           #+#    #+#             */
/*   Updated: 2026/07/10 20:39:25 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	a = (int *)malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	if (min >= max)
	{
		a = NULL;
		return (0);
	}
	while (i < size)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
