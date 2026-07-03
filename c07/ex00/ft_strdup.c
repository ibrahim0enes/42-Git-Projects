/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: colak <colak@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:13:00 by colak             #+#    #+#             */
/*   Updated: 2026/06/18 15:45:36 by colak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (*str)
	{
		j++;
		str++;
	}
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*src;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
