/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 00:00:00 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/09 21:55:12 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_write_word(const char *s, char c)
{
	char	*result;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static void	ft_split_free(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static int	ft_split_fill(const char *s, int *i, char c, char **slot)
{
	*slot = ft_write_word(&s[*i], c);
	if (!*slot)
		return (-1);
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (ft_split_fill(s, &i, c, &result[j++]) == -1)
			return (ft_split_free(result, j), NULL);
	}
	result[j] = NULL;
	return (result);
}
