/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 20:45:49 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/08 20:56:23 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    size_t i;
    size_t len;

    len = ft_strlen(s);
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (i < len)
    {
        result[i] = f(i,s[i]);
        i++;
    }
    result[len] = '\0';
    return (result);
}