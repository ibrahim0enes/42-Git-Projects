/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 15:46:35 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/08 14:53:30 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	start;
	char	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_substr(s1));
	start = 0;
	end = ft_strlen(s1);
	while (set[start] && ft_strrchr(set,s1[start]))
		start++;
	while (end > start && ft_strrchr[set,s1[end]])
		end--;
	return (ft_substr(s1,start,end - start + 1));
}
