/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:05:57 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/07 17:05:57 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *collab;
    size_t s1_len;
    size_t s2_len;
    size_t i;

    if (!s1 || !s2)
        return (NULL);

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    collab = malloc(s1_len + s2_len + 1);
    if (!collab)
        return (NULL);
    i = 0;
    while (s1_len)
        collab[i] = s1 + i++;
    i = 0;
    while (s2_len)
        collab[i + s1_len] = s2 + i++;
    collab[s2_len + s1_len] = "\0";
    return (collab);
}