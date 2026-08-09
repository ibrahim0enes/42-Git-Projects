/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibcolak <ibcolak@42.student.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 12:42:13 by ibcolak           #+#    #+#             */
/*   Updated: 2026/08/09 12:42:13 by ibcolak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
    long num;

    num = n;

    if (num < 0)
    {
        num = -num;
        write(fd, "-", 1);
    }
    if (num > 9)
    {
        ft_putnbr_fd(num / 10,fd);
        ft_putnbr_fd(num % 10,fd);
    }
    c = (num % 10) + '0';
    write(fd, &c, 1);
}