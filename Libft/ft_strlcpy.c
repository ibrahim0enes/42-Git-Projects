/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:24:59 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/05 21:24:07 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i++];
	}
	dst[i] = '\0';
	return (src_len);
}

int main(void)
{
	char dest[20];
	const char *src = "Hello, World!";
	size_t size = sizeof(dest);

	size_t copied = strlcpy(dest, src, size);

	printf("Copied: %zu\n", copied);
	printf("Destination: %s\n", dest);

	return 0;
}